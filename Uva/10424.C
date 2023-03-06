#include<stdio.h>

int main(){

    char s[27];
    char s1[27];

    int i,add=0,add1=0;
    float sum,sum1,result;

    while(scanf("%s %s",s,s1)!=EOF){

        for(i=0;s[i]!='\0';i++){

            if(s[i]>='A' && s[i]<='Z'){
                add=add+(s[i]-64);
            }
            else if(s[i]>='a' && s[i]<='z'){
                add=add+(s[i]-96);
            }
        }
        //printf("%d\n",add);

       while(add!=0){

        sum=0.0;

        while(add!=0){
            int r=add%10;
            sum=sum+r;
            add=add/10;
        }
        if(sum>9){
            add=sum;
        }
     }

     for(i=0;s1[i]!='\0';i++){
        if(s1[i]>='A' && s1[i]<='Z'){
            add1=add1+(s1[i]-64);
        }
        else if(s1[i]>='a' && s1[i]<='z'){
            add1=add1+(s1[i]-96);
        }
     }
     //printf("%d\n",add1);

    while(add1!=0){

        sum1=0.0;
        while(add1!=0){
            int r1=add1%10;
            sum1=sum1+r1;
            add1=add1/10;
        }
        if(sum1>9){
            add1=sum1;
        }
    }

    if(sum>sum1){
         result=((sum1*100)/sum);
        printf("%.2f %%\n",result);
    }

    else{
        result=((sum*100)/sum1);
        printf("%.2f %%\n",result);
    }

}

return 0;
}
