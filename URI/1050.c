#include<stdio.h>

int main(){


int a[8]={61,71,11,21,32,19,27,31},y;

scanf("%d",&y);

     if(a[0]==y){
          printf("Brasilia\n");
     }
     else if(a[1]==y){
          printf("Salvador\n");
     }
      else if(a[2]==y){
          printf("Sao Pualo\n");
     }
      else if(a[3]==y){
          printf("Reo de Janeiro\n");
     }
      else if(a[4]==y){
          printf("Juiz de Fora\n");
     }
      else if(a[5]==y){
          printf("Campinas\n");
     }
      else if(a[6]==y){
          printf("Vitoria\n");
     }
      else if(a[7]==y){
          printf("Belo Horizonte\n");
     }
      else{
          printf("DDD nao cadastrado\n");
     }

return 0;
}
