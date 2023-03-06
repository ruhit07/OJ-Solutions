#include<stdio.h>

int main(){

    int N,i,j;
    scanf("%d",&N);

    for(j=1;j<=N;j++){
        int sum=0,X,Y;

        scanf("%d %d",&X,&Y);

        if(X>Y){
            int temp=Y;
            Y=X;
            X=temp;
        }

        for(i=X+1;i<Y;i++){
            if(i%2!=0){
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }


return 0;
}
