#include<stdio.h>

int main(){

   int x[100],i,max,location=0;

   for(i=0;i<100;i++){
     scanf("%d",&x[i]);
   }
   max=x[0];

   for(i=1;i<100;i++){
     if(max<x[i]){
          max=x[i];
          location=i;
     }
   }
     printf("%d\n",max);
     printf("%d\n",(location+1));
return 0;
}

