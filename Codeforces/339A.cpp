#include<iostream>

using namespace std;

int main(){

    string s;
    cin>>s;
    int x=s.size();

    for(int i=0;i<x;i=i+2){
        for(int j=0;j<x-1;j=j+2){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
        }
    }

    cout<<s<<endl;

return 0;
}
