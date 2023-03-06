#include<iostream>

using namespace std;

int main(){

    int x,i,j;
    cin>>x;

     int N[x];

     for(i=0;i<x;i++){
        cin>>N[i];
     }

     for(j=1;j<=x;j++){
        for(i=0;i<x;i++){
            if(j==N[i]){
                cout<<i+1<<" ";
            }
        }
     }

return 0;
}
