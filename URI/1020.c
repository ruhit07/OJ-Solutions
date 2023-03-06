#include<stdio.h>
#include<math.h>

int main(){

int x,year,month,day;

scanf("%d",&x);

year=x/365;
month=x%365/30;
day=x%365%30/1;

printf("%d ano(s)\n",year);
printf("%d mes(es)\n",month);
printf("%d dia(s)\n",day);


return 0;
}

