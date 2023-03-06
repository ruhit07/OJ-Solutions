#include<stdio.h>

int main(){

    int N,x,i,sum=0,sum1=0,sum2=0,sum3=0;
    char ch;
    scanf("%d",&N);

    for(i=1;i<=N;i++){
        scanf("%d %c",&x,&ch);
        sum=sum+x;

        if(ch=='C'){
            sum1=sum1+x;
        }

        else if(ch=='R'){
            sum2=sum2+x;
        }

        else if(ch=='S'){

            sum2=sum2+x;
        }

  }

    float X1=((sum1/sum)*100),X2=((sum2/sum)*100),X3=((sum3/sum)*100);

    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",sum1);
    printf("Total de ratos: %d\n",sum2);
    printf("Total de sapos: %d\n",sum3);
    printf("Percentual de coelhos: %.2f %%\n",X1);
    printf("Percentual de ratos: %.2f %%\n",X2);
    printf("Percentual de sapos: %.2f %%\n",X3);

return 0;
}
