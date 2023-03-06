#include<stdio.h>

int main(){

char ch[20];

double x,y,sum;

     scanf("%s",&ch);

scanf("%lf%lf",&x,&y);
sum=x+(y*15/100);

printf("TOTAL = R$ %0.2lf\n",sum);


return 0;
}
