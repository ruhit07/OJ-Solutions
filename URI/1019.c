#include<stdio.h>
#include<math.h>

int main(){

int N,hour,min,sec;

scanf("%d",&N);

hour=N/3600;
min=N%3600/60;
sec=N%60;

printf("%d:%d:%d\n",hour,min,sec);

return 0;
}

