#include<stdio.h>


int main(){

float x,y,z,a,c;

scanf("%f%f%f",&x,&y,&z);

if((x+y>z) && (y+z>x) && (z+x>y)){
    a=x+y+z;
    printf("Perimetro = %0.1f\n",a);
}

else{

    c=((x+y)*z)/2.0;
    printf("Area = %0.1f\n",c);
}


return 0;
}
