#include<stdio.h>
#include<math.h>

int main(){

double A,B,C;

scanf("%lf%lf%lf",&A,&B,&C);

if(A>=B+C){
    printf("NAO FORMA TRIANGULO\n");
}
if(pow(A,2)==pow(B,2)+pow(C,2)){
    printf("TRIANGULO RETANGULO\n");
}
if(pow(A,2)>pow(B,2)+pow(C,2)){
    printf("TRIANGULO OBTUSANGULO\n");
}
if(pow(A,2)<pow(B,2)+pow(C,2)){
    printf("TRIANGULO ACUTANGULO\n");
}
if(A==B && B==C && C==A){
    printf("TRIANGULO EQUILATERO\n");
}
if((A==B && B!=C) || (B==C && B!=A) || (C==A && A!=B)) {
    printf("TRIANGULO ISOSCELES\n");
}

return 0;
}

