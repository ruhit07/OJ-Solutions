#include<stdio.h>

int main(){

    int N,sum=0,x1=0,x2=1;
    scanf("%d",&N);

    for(int i=1;i<N;i++){

        printf("%d ",x1);

        sum=x1+x2;
        x1=x2;
        x2=sum;

    }
    printf("%d\n",x1);



return 0;
}
