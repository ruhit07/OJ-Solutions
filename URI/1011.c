#include<stdio.h>
#include<math.h>

int main(){

double R,pi,X;

scanf("%lf",&R);

pi=3.14159;
X=((4.0/3)*pi*R*R*R);

printf("VOLUME = %0.3lf\n",X);

return 0;
}
