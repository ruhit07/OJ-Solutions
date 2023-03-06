#include<iostream>

using namespace std;

int main(){

    int a,w,h,n;
    cin>>a;

    for(int i=1;i<=a;i++){
          int tempw=0,temph=1;
          int num_enc=0;
        cin>>w>>h>>n;

        if(w%2==0){

            while(w%2==0){
                w=(w/2);
                num_enc++;
            }
            tempw=num_enc*2;
        }
        num_enc=0;
        if(h%2==0){

            while(h%2==0){
                h=(h/2);
                num_enc++;

            }
            temph=num_enc*2;
        }

        if(tempw+temph>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

return 0;
}
