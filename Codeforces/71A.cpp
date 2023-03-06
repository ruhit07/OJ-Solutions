#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    string str;

    for(int i=1;i<=n;i++){
        cin>>str;

        int a=str.size();

        if(a<=10){
            cout<<str<<endl;
        }
        else{

            cout<<str[0]<<(a-2)<<str[a-1]<<endl;
        }
    }

return 0;
}
