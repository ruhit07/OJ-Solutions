#include<stdio.h>
#include<math.h>

int main(){

     double A,B,C,R1,R2,x;
     scanf("%lf%lf%lf",&A,&B,&C);

     x=((B*B)-4*(A)*(C));

     R1= (-B+sqrt(x))/(2*A);
     R2= (-B-sqrt(x))/(2*A);

     if(x>0 && A!=0){
          printf("R1 = %0.5lf\n",R1);
          printf("R2 = %0.5lf\n",R2);
     }
     else{
          printf("Impossivel calcular\n");
     }

return 0;
}
