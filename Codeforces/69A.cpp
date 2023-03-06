#include<iostream>

using namespace std;

int main(){

    int n,i,j,sum,cnt=0;
    cin>>n;

    int arr[n][3];

    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(j=0;j<3;j++){
        sum=0;
        for(i=0;i<n;i++){
            sum=sum+arr[i][j];
        }

        if(sum==0){
            cnt++;
        }
    }

    if(cnt==3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

return 0;
}
