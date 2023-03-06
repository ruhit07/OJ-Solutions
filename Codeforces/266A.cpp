#include<iostream>

using namespace std;

int main(){

    int n,temp=0;
    string x;
    cin>>n>>x;

    for(int i=0;i<n-1;i++){
        if(x[i]==x[i+1]){
            temp++;
        }
    }
    cout<<temp<<endl;

return 0;
}
