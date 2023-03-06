#include<stdio.h>


int main(){

int N,X,i,in=0,out=0;

scanf("%d",&N);

for(i=1;i<=N;i++){
     scanf("%d",&X);
     if(X<=10){
          in++;
     }
     else{
          out++;
     }
}
printf("%d in\n",in);
printf("%d out\n",out);

return 0;
}

