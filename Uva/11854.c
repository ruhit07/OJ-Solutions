#include<stdio.h>

int main(){

int x,y,z;

    while (scanf("%d %d %d",&x,&y,&z)){
        if(x==0 && y==0 && z==0){
            break;
        }

        if(x>y && x>z){
            if(x*x==(y*y)+(z*z)){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }

         else if(y>x && y>z){
            if(y*y==(x*x)+(z*z)){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }

        else{
            if(z*z==(x*x)+(y*y)){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }
    }

return 0;
}


