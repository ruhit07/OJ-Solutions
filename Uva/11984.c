#include<stdio.h>

int main(){

    int n,c,d;

    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d %d",&c,&d);
        float f=((9*c)/c)+32;
        float x=f+d;

        printf("case %d:%0.2f\n",i);
    }


return 0;
}

