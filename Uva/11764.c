#include<stdio.h>

int main(){

    int n,t,x,i,j,k,high,low,index;
    int a[50];
    scanf("%d",&t);

    for(i=1;i<=t;i++){
        high=0;
        low=0;
        index=0;
        scanf("%d",&n);

        for(j=1;j<=n;j++){
            scanf("%d",&x);

            a[index]=x;
            index++;
        }

        for(k=0;k<index-1;k++){

            if(a[k]<a[k+1]){
               high++;
            }
           else if(a[k]>a[k+1]){
                low++;
            }

        }

        printf("Case %d: %d %d\n",i,high,low);
    }

return 0;
}
