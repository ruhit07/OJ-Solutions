#include<iostream>

using namespace std;

int main(){

    int n,k,temp=0;
    cin>>n>>k;

    int x[n];

    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    for(int i=0;i<n;i++){

        if(x[i]>0 && x[i]>=x[k-1]){
            temp++;
    }
}
    cout<<temp<<endl;




return 0;
}
