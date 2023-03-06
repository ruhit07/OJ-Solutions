#include<iostream>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int cnt1=0,cnt2=0,temp=0,x=s.size();

    for(int i=0; i<x; i++){
        if(s[i]=='1'){
            cnt1++;
            cnt2=0;
        }
        else{
            cnt2++;
            cnt1=0;
        }
        if(cnt1==7 || cnt2==7){
            temp=1;
        }
    }
    if(temp==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

