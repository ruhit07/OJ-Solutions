#include<stdio.h>

int main(){


    int n;
    while(scanf("%d", &n) && n){

        while(1){
            int sum = 0;
            while(n > 0){
                sum = sum + n%10;
                n = n/10;
            }
            //printf("%d\n", sum);
            if(sum > 9){
                n = sum;
            }
            else{
                printf("%d\n", sum);
                break;
            }
        }
    }

return 0;
}
