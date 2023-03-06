#include<stdio.h>

int main(){

     int x,y,du;
     scanf("%d%d",&x,&y);

     du=y-x;

     if(du<0){
          du=24+(du);
     }
     if(x==y){
          printf("O JOGO DUROU 24 HORA(S)\n");
     }
     else{
          printf("O JOGO DUROU %d HORA(S)\n",du);
     }

return 0;
}
