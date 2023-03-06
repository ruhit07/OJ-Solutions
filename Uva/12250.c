#include<stdio.h>

int funtion(char str[],char str1[]){

    int m,n;
    for(m = 0; str[m] != '\0'; m++);
    for(n = 0; str1[n] != '\0'; n++);
    //printf("%d %d\n", l1, l2);
    if(m != n){
        return 0;
    }

    int one=1;

    for(int i=0;str[i]!='\0';i++){
            if(str[i]!=str1[i]){
                one--;
                break;
            }
       }
       return one;
}

int main(){

    char s[14],s1[]="HELLO",s2[]="HOLA",s3[]="HALLO",s4[]="BONJOUR",s5[]="CIAO",s6[]="ZDRAVSTVUJTE";
    int i,x,one=0;

    for(i=1;;i++){
       scanf("%s",s);
       //gets(s);
       if(s[0]=='#'){
            break;
        }

       if(x=funtion(s,s1)){
            printf("Case %d: ENGLISH\n",i);
       }

       else if(x=funtion(s,s2)){
            printf("Case %d: SPANISH\n",i);
       }

       else if(x=funtion(s,s3)){
            printf("Case %d: GERMAN\n",i);
       }

       else if(x=funtion(s,s4)){
            printf("Case %d: FRENCH\n",i);
       }

       else if(x=funtion(s,s5)){
            printf("Case %d: ITALIAN\n",i);
       }


       else if(x=funtion(s,s6)){
            printf("Case %d: RUSSIAN\n",i);
       }

       else{
        printf("Case %d: UNKNOWN\n",i);
       }

  }

return 0;
}
