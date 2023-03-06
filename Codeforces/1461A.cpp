#include<iostream>

using namespace std;

int main(){

    int t,n,k;
    char ch='a';
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>k;

        for(int j=0;j<n;j++){
            cout<<ch;

            if (ch<='b'){
                ch++;
            }
            else{
                ch='a';
            }
        }

        cout<<endl;
    }

return 0;
}
