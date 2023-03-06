#include<stdio.h>

int main(){


     float n,x,y;
     scanf("%f",&n);

     if(n>=0 && n<=400.00){

          x=n+(n*0.15);
          y=(n*0.15);

          printf("Novo salario: %0.2f\n",x);
          printf("Reajuste ganho: %0.2f\n",y);
          printf("Em percentual: 15 %%\n");
     }
         else if(n>=400.01 && n<=800.00){

          x=n+(n*0.12);
          y=(n*0.12);

          printf("Novo salario: %0.2f\n",x);
          printf("Reajuste ganho: %0.2f\n",y);
          printf("Em percentual: 12 %%\n");
     }
         else if(n>=800.01 && n<=1200.00){

          x=n+(n*0.1);
          y=(n*0.1);

          printf("Novo salario: %0.2f\n",x);
          printf("Reajuste ganho: %0.2f\n",y);
          printf("Em percentual: 10 %%\n");
     }
         else if(n>=1200.01 && n<=2000.00){

          x=n+(n*0.07);
          y=(n*0.07);

          printf("Novo salario: %0.2f\n",x);
          printf("Reajuste ganho: %0.2f\n",y);
          printf("Em percentual: 7 %%\n");
     }

     else if(n>2000.00){

          x=n+(n*0.04);
          y=(n*0.04);

          printf("Novo salario: %0.2f\n",x);
          printf("Reajuste ganho: %0.2f\n",y);
          printf("Em percentual: 4 %%\n");
     }

return 0;
}
