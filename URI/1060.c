#include<stdio.h>
#include<math.h>

int main(){

float x[6];
int i,positive_num=0;

for(i=0;i<6;i++){
     scanf("%f",&x[i]);
     if(x[i]>0){
         positive_num++;
     }
}
printf("%d valores positivos\n",positive_num);

return 0;
}


