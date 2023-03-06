#include<stdio.h>
#include<math.h>

int main(){

int X,Y;
float Z;

scanf("%d%d",&X,&Y);

switch(X){

    case 1:Z=Y*4.00;
           printf("Total: R$ %0.2f\n",Z);
           break;

    case 2:Z=Y*4.50;
           printf("Total: R$ %0.2f\n",Z);
           break;

    case 3:Z=Y*5.00;
           printf("Total: R$ %0.2f\n",Z);
           break;

    case 4:Z=Y*2.00;
           printf("Total: R$ %0.2f\n",Z);
           break;

    case 5:Z=Y*1.50;
           printf("Total: R$ %0.2f\n",Z);
           break;

}



return 0;
}
