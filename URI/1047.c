#include<math.h>

int main(){

     int x1,y1,x2,y2,du,mu;

     scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

     du=(x2-x1);
     mu=(y2-y1);

     if(du<0 ){
          du=24+(du);
     }
     if(mu<0 ){
          mu=60+(mu);
          du--;
     }

     if(x1==x2 && y1==y2){
          printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
     }
     else{
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",du,mu);
     }

return 0;
}
