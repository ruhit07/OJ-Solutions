#include<iostream>

using namespace std;

int main(){

    int n;
    int cnt=0;
    int temp=0;
    cin>>n;
    int x[n];

    for(int j=0;j<n;j++){
        cin>>x[j];
    }
    for(int i=0;i<n-1;i++){
        if((x[i]<x[i+1]) || (x[i]==x[i+1])){
            cnt++;
        }
        else{
            if(cnt+1>temp){
                temp=cnt+1;
            }
           cnt=0;
        }
    }

    if(cnt+1>temp){
        temp=cnt+1;
    }
    cout<<temp<<endl;

return 0;
}
