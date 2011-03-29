<<<<<<< HEAD
=======
clc
>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399
clear all

color=['rgb'];
figure(42)
clf
hold on

load('../Data/147withsim.mat');

lt=length(trials);

T=0:.01:2*pi;
sT=.288/80*sin(T);
cT=.288/80*cos(T);

scale=2;
legend_drawn=0;

<<<<<<< HEAD
best=zeros(lt,1);
bestval=ones(lt,1)*inf;
besttype=-ones(lt,1);
=======
vals=cell(lt,1);
best=-ones(lt,1);
>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399

h = waitbar(0,'Starting');
fail=ones(lt,1);

for k=1:lt
    waitbar(k/lt,h,'Starting');
    tk=trials{k};
    try
        lrt=length(tk.resetT);
<<<<<<< HEAD

        realpathchunks=sqrt(sum(diff(tk.pos).^2,2));
        realpath=cumsum(realpathchunks);
        realpath=[0; realpath(realpath<2*realpath(end)/3)];
=======
        workinglrt=lrt;

        realpathchunks=sqrt(sum(diff(tk.pos).^2,2));
        realpath=cumsum(realpathchunks);
        realpath=[0; realpath(realpath<3*realpath(end)/4)];
>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399
        realpos=tk.pos(1:length(realpath),:);

        pos0=tk.reset0.pos;
        path0=[0; cumsum(sqrt(sum(diff(pos0).^2,2)))];
        corresponding0=twoNearestNeighbor(pos0,path0,realpath);
        area0=sum(sqrt(sum(abs(realpos-corresponding0).^2,2)).*realpathchunks(1:length(realpath)));

<<<<<<< HEAD
        best(k)=lrt;
        bestval(k)=area0;
=======
        vals{k}=zeros(lrt,3);
        vals{k}(end,1)=area0;
>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399

        for resetT=1:lrt-1
            pos1=tk.reset1.pos{resetT};
            path1=[0; cumsum(sqrt(sum(diff(pos1).^2,2)))];
            corresponding1=twoNearestNeighbor(pos1,path1,realpath);
            area1=sum(sqrt(sum(abs(realpos-corresponding1).^2,2)).*realpathchunks(1:length(realpath)));
<<<<<<< HEAD
            if area1<bestval(k)
                best(k)=resetT;
                bestval(k)=area1;
                besttype(k)=1;
            end
=======
            vals{k}(resetT,2)=area1;
>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399

            pos2=tk.reset2.pos{resetT};
            path2=[0; cumsum(sqrt(sum(diff(pos2).^2,2)))];
            corresponding2=twoNearestNeighbor(pos2,path2,realpath);
            area2=sum(sqrt(sum(abs(realpos-corresponding2).^2,2)).*realpathchunks(1:length(realpath)));
<<<<<<< HEAD
            if area2<bestval(k)
                best(k)=resetT;
                bestval(k)=area2;
                besttype(k)=2;
            end
        end
        resetT=best(k);
=======
            vals{k}(resetT,3)=area2;
        end
        [v1,resetT1]=min(vals{k}(1:end-1,2));
        [v2,resetT2]=min(vals{k}(1:end-1,3));

>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399
        f=find(tk.requested);
        %plot actual reset0 reset1 reset2
        plot(tk.pos(:,1),tk.pos(:,2)+k/scale,'b')
        plot(tk.pos(f,1),tk.pos(f,2)+k/scale,'c')
        plot(tk.reset0.pos(:,1),tk.reset0.pos(:,2)+k/scale,'r')
<<<<<<< HEAD
        plot(tk.reset1.pos{resetT}(:,1),tk.reset1.pos{resetT}(:,2)+k/scale,'g')
        plot(tk.reset2.pos{resetT}(:,1),tk.reset2.pos{resetT}(:,2)+k/scale,'k')
=======
        plot(tk.reset1.pos{resetT1}(:,1),tk.reset1.pos{resetT1}(:,2)+k/scale,'g')
        plot(tk.reset2.pos{resetT2}(:,1),tk.reset2.pos{resetT2}(:,2)+k/scale,'k')
>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399
        if (~legend_drawn)
            legend('Actual','Probe Force On','No reset','Feedback only reset','FB and FF reset')
            legend_drawn=1;
        end
<<<<<<< HEAD
=======
        plot(tk.reset0.pos(:,1),tk.reset0.pos(:,2)+k/scale,'r')
>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399
        plot(-.01+sT,.48+cT+k/scale,'m-')
        plot(tk.target(1)+2*sT,tk.target(2)+2*cT+k/scale,'m-')
        plot(tk.pos(1,1)+2*sT,tk.pos(1,2)+2*cT+k/scale,'b')
        plot(-.01,.48+k/scale,'mo')
        plot(tk.target(1),tk.target(2)+k/scale,'mx')
        plot([-.01 tk.target(1)],[.48 tk.target(2)]+k/scale,'m-')
        axis equal
<<<<<<< HEAD
    catch
=======
    catch ME
        if ME.stack.line~=30
            ME.message
            ME.stack.line
        end
>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399
        fail(k)=0;
    end
end
close(h)

<<<<<<< HEAD
besttypepre=besttype;
=======
vmat=zeros(workinglrt,sum(fail==1),2);
c=0;
for k=1:lt
    if fail(k)==1
        c=c+1;
        vmat(:,c,1)=vals{k}(:,2);
        vmat(:,c,2)=vals{k}(:,3);
        vmat(end,c,1)=vals{k}(end,1);
        vmat(end,c,2)=vals{k}(end,1);
    end
end

bestindices=ones(sum(fail==1),3)*lrt;
best0=vmat(end,:,1);
[best1,bestindices(:,2)]=min(vmat(1:end-1,:,1),[],1);
[best2,bestindices(:,3)]=min(vmat(1:end-1,:,2),[],1);

[bestval,ind]=min([best0' best1' best2'],[],2);
besttype=ind-1;
besttime=besttype;
t=linspace(.05, .26, 50);
t=[t inf];
for k=1:sum(fail==1)
    besttime(k)=t(bestindices(k,besttype(k)+1));
end
u=unique(besttime);
su=sort(u);

>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399

xlabel('Reset Times, discrete')
ylabel('Catch Trial')

figure(43)
clf
<<<<<<< HEAD
best=best(besttype~=-1);
besttype=besttype(besttype~=-1);
t=linspace(.05, .26, 50);
t=[t inf];
u=unique(t(best));
su=sort(u);
for k=1:length(u)
    ulabs{k}=num2str(su(k));
end
    
n=zeros(3,length(u));

for k=0:2
    n(k+1,:)=hist(t(best(besttype==k)),u)
=======
for k=1:length(u)
    ulabs{k}=num2str(su(k));
end

n=zeros(3,length(u));

n(1,end)=sum(besttype==0);
for k=1:2
    n(k+1,1:end-1)=hist(besttime(besttype==k),u(1:end-1));
>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399
end
bar(n')
set(gca, 'xticklabel',ulabs);
xlabel('Reset Times, discrete')
ylabel('Quantity')
legend('No Reset','FB Only ','FF and FB')

<<<<<<< HEAD
=======
figure(44)
clf
hold on
color='gb';
errorbar(2*trials{c}.resetT(end-1)-trials{c}.resetT(end-2),mean(vmat(end,:,k),2),1.96*std(vmat(end,:,k),0,2),'ro')
for k=1:2
    errorbar(trials{c}.resetT(1:end-1),mean(vmat(1:end-1,:,k),2),1.96*std(vmat(1:end-1,:,k),0,2),color(k))
end
xlabel('Reset Times, discrete')
ylabel('Error')
legend('No Reset','FB Only ','FF and FB')

>>>>>>> 1c5a2e28207def3d0878d39848a2aec28cff8399