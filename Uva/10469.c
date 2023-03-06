#include<stdio.h>

int main(){

    int x,y;

    while(scanf("%d %d",&x,&y)!=EOF){

        int res = x^y;
        printf("%d\n", res);

        /**
        while(x!=0){
            int m=x%2;
            x=x/2;

            ch[temp]=m;
            temp++;
        }
        for(i=0;i<temp/2;i++){
            int swap=ch[i];
            ch[i]=ch[temp-1-i];
            ch[temp-1-i]=swap;
        }
        for(i=0;i<temp;i++){
           printf("%d",ch[i]);
        }
        printf("\n");


        while(y!=0){
            int n=y%2;
            y=y/2;

            cs[index]=n;
            index++;
        }
        for(i=0;i<index/2;i++){
            int swap2=cs[i];
            cs[i]=cs[index-1-i];
            cs[index-1-i]=swap2;
        }

        for(i=0;i<index;i++){
           printf("%d",cs[i]);
        }
        */

    }

return 0;
}
