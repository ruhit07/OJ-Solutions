#include<iostream>

using namespace std;

int main(){

    int x,a,b,c,temp=0;

    cin>>x;

    for(int i=1;i<=x;i++){
        cin>>a>>b>>c;

        if((a+b+c)>1){
        temp++;
    }
}
        cout<<temp<<endl;

return 0;
}
