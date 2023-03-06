#include<iostream>

using namespace std;

int main(){

    string s;
    string s1="hello";
    int i,j=0;
    cin>>s;

    for(i=0;s[i]!='\0';i++){

        if(s[i]==s1[j]){
            j++;
        }

    }
    if(j>=5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

return 0;
}
