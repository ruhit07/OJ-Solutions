#include<stdio.h>

int main(){

int N,i,sum=1;

scanf("%d",&N);

for(i=1;i<=N;i++){
     if(i%2==0){
         sum=i*i;
         printf("%d^2 = %d\n",i,sum);
     }
}


return 0;
}

