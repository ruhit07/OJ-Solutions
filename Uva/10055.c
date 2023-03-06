#include<stdio.h>
#include<math.h>

int main(){

     /*
     unsigned long hasmot,oponent;

     while(scanf("%lu %lu",&hasmot,&oponent) != EOF){

           if(hasmot<oponent){
               unsigned long temp=hasmot;
               hasmot=oponent;
               oponent=temp;
           }

           printf("%lu\n",(hasmot-oponent));

     }

     */
     long long int h,op;

     while(scanf("%lld %lld",&h,&op) !=EOF){

          if(h>op){
               printf("%lld\n",h-op);
          }

          else{
               printf("%lld\n",op-h);
          }
     }

     return 0;
}
