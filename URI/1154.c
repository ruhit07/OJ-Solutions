#include<stdio.h>

int main(){

    int x,sum=0;
    float ava,temp=0.0;
    while(scanf("%d",&x)){

        if(x<0){
            break;
        }
        sum=sum+x;
        temp++;
        ava=sum/temp;


    }
    printf("%.2f\n",ava);


return 0;
}
