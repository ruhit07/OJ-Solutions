#include<stdio.h>

int main(){

    int n;
    while(scanf("%d",&n) && n){
        int bin[32];

        int index = 0, sum = 0;
        while(n != 0){
            int x = n%2;
            n = n/2;
            if(x==1){
                sum++;
            }

            bin[index] = x;
            index++;
        }

        for(int i = 0; i < index/2; i++){
             int temp = bin[i];
             bin[i] = bin[index-i-1];
             bin[index-i-1] = temp;
        }

        printf("The parity of ");

        for(int i = 0; i < index; i++)
            printf("%d", bin[i]);
        printf(" is %d (mod 2).\n", sum);
    }

    return 0;

}
