#include<stdio.h>
#include<math.h>

int main(){

float N1,N2,N3,N4,X;

scanf("%f%f%f%f",&N1,&N2,&N3,&N4);

X=((N1*2)+(N2*3)+(N3*4)+(N4*1)/(2+3+4+1));

printf("Media: %0.1f\n",X);

    if(X>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(X<=5.0){
        printf("Aluno reprovado.\n");
    }
    else if(5.0<X<6.9){
        printf("Aluno em exame.\n");
    }

return 0;
}

