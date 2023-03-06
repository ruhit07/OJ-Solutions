#include<iostream>
#include<ctype.h>

using namespace std;

int main(){

    int x,cnt=0;
    cin>>x;
    string str;

    for(int i=0;i<x;i++){
         cin>>str;

        if(str=="++X" || str=="X++"){
            cnt++;
        }

        else{
            cnt--;
        }
    }

    cout<<cnt<<endl;

return 0;
}
