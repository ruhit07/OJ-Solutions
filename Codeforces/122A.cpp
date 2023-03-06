#include<iostream>

using namespace std;

int main(){

    int n,cnt=0;
    cin>>n;


        if((n%7==0) || (n%4==0) ||(n%47==0) || (n%74==0) || (n%477==0) || (n%774==0) || (n%474==0) || (n%747==0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


return 0;
}
