#include<stdio.h>

int main(){

     int num,i;

     scanf("%d",&num);
     int x[num];

     for(i=0;i<num;i++){
          scanf("%d",&x[i]);
     }
     for(i=0;i<num;i++){
          if(x[i]>0 && x[i]%2==0){
               printf("EVEN POSITIVE\n");
          }
          if(x[i]<0 && x[i]%2==0){
               printf("EVEN NEGATIVE\n");
          }
            if(x[i]>0 && x[i]%2!=0){
               printf("ODD POSITIVE\n");
          }
          if(x[i]<0 && x[i]%2!=0){
               printf("ODD NEGATIVE\n");
          }
          if(x[i]==0){
               printf("NULL\n");
          }
     }

return 0;
}
