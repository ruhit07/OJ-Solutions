#include<iostream>
#include<ctype.h>

using namespace std;

int main(){

    string str;
    int temp=0,temp1=0;
    cin>>str;

    for(int i=0;str[i]!='\0';i++){

        if(str[i]>='A' && str[i]<='Z'){
            temp++;
        }
        else{
            temp1++;
        }
    }

    for(int i=0;str[i]!='\0';i++){
        if(temp>temp1){
            str[i]=towupper(str[i]);
        }
        if(temp<temp1){
            str[i]=towlower(str[i]);
        }
        if(temp==temp1){
            str[i]=towlower(str[i]);
        }
    }

    cout<<str<<endl;

return 0;
}
