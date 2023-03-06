#include<stdio.h>

int main(){

     int t,a,b;

     scanf("%d",&t);

     if(t<15){

           for(int i=1;i<=t;i++){
          scanf("%d %d",&a,&b);

          if(a>b){
               printf(">\n");
          }
          else if(a<b){
               printf("<\n");
          }
           else{
               printf("=\n");
          }
     }
     }



return 0;
}
