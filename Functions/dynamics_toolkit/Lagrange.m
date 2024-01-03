
function [M]=Lagrange(Lag,V)
syms t;
Var=length(V)/3;
Vt=V;

for cont0=1:1:Var
    cont0
    Vt(cont0*3-2)=str2sym( strcat('f',num2str(cont0),'(t)') );
    Vt(cont0*3-1)=diff(Vt((cont0*3)-2),t);
    Vt(cont0*3)=diff(Vt((cont0*3)-2),t,2);
end
for cont0=1:1:Var
    cont0
    % differentiate w.r.t q and qdot
    L1=(diff(Lag,V(cont0*3-1)));
    L2=(diff(Lag,V(cont0*3-2)));
    Dposx=L1;
    % diff(L/qdot,t)
    for cont=1:1:Var*3
        cont
        Dposx=subs(Dposx,V(cont),Vt(cont));
    end
    L1=diff(Dposx,t);
    for cont=Var*3:-1:1         %
        cont
        L1=subs(L1,Vt(cont),V(cont));
    end
    L1F=L1-L2;
    L1F=(expand(L1F));
    L1F=collect(L1F,Vt(cont0*3));%*****************
    M(cont0,1)=L1F;
end
end