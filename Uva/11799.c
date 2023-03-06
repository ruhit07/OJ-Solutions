#include<stdio.h>

int main (){

    int t,i,j,n,max;
    int x[10000];
    scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%d",&n);

        for(j=0;j<n;j++){
            scanf("%d",&x[j]);
        }
        max=x[0];

        for(j=1;j<n;j++){
            if(max<x[j]){
                max=x[j];
            }
        }
        printf("Case %d: %d\n",i,max);
    }

    return 0;
}
