#include<stdio.h>

int main(){

    int N,i,sum=1;
    scanf("%d",&N);

    for(i=N;i>=1;i--){
        sum=sum*i;
    }
    printf("%d\n",sum);
return 0;
}
