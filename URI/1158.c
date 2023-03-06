#include<stdio.h>

int main(){

     int N,X,Y;

     scanf("%d",&N);

     for(int i=1;i<=N;i++){
          int sum=0;
          scanf("%d %d",&X,&Y);

          if(X%2==0){
               X++;
          }
          for(int j=1;j<=Y;j++){
              sum=sum+X;
              X=X+2;
          }
          printf("%d\n",sum);
     }

return 0;
}
