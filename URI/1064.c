#include<stdio.h>

int main(){

float a[6],avvarge,total_sum=0;
int i,sum=0;

for(i=0;i<6;i++){
     scanf("%f",&a[i]);
}
for(i=0;i<6;i++){
     if(a[i]>0){
          sum++;
     }
}

for(i=0;i<6;i++){
     if(a[i]>0){
        total_sum=total_sum+a[i];
        avvarge=total_sum/sum;

     }
}




printf("%d valores positivos\n",sum);
printf("%0.1f\n",avvarge);


return 0;
}

