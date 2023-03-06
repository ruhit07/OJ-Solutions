#include<iostream>

using namespace std;

int main()
{


    int limak,bob,cnt=0;

    cin>>limak>>bob;

    while(limak<=bob){

        limak=limak*3;
        bob=bob*2;
        cnt++;
    }

    cout<<cnt<<endl;



    return 0;
}
