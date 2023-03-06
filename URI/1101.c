#include<stdio.h>

int main(){

    int M,N,i;

    while(scanf("%d %d",&M,&N)){
    if(M<=0 || N<=0){
        break;
    }

    if(M>N){
        int temp=M;
        M=N;
        N=temp;
    }

    int sum=0;

    for(i=M;i<=N;i++){
        sum=sum+i;
        printf("%d ",i);
    }
    printf("Sum=%d\n",sum);
}

    /*
    else if(M>N){

        for(i=N;i<=M;i++){
        sum=sum+i;
        printf("%d ",i);
    }
        printf("sum=%d\n",sum);
    }

    else{

        for(i=M;i<=N;i++){
        sum=sum+i;
        printf("%d ",i);
    }
        printf("sum=%d\n",sum);
    }
}
    */

return 0;
}
