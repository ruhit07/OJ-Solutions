#include<iostream>

using namespace std;

int main(){

int w,n,k,sum=0;

    cin>>w>>n>>k;

    for(int i=1;i<=k;i++){
        sum=sum+(w*i);
    }

    if(sum>n){
        cout<<sum-n<<endl;
    }
    else{
        cout<<"0"<<endl;
    }

return 0;
}
