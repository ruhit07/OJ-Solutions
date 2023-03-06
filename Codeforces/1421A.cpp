#include<iostream>

using namespace std;

int main(){

    int n,a,b;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a>>b;

        int x=a^b;
        cout<<x<<endl;
    }

return 0;
}
