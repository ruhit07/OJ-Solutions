#include<stdio.h>
#include<math.h>

int main(){

int N;

    scanf("%d",&N);
    int temp=N;

    for(int i=1;i<=10000;i++){
        for(int j=1;j<=10000;i++){
            if(N==(i*i*i)-(j*j*j)){
                printf("%d %d\n,j);
                break;
               }
           else{
            printf("No solution");
           }
        }
    }





return 0;
}
