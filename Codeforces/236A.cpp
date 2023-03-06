#include<iostream>

using namespace std;

int main()
{

    string s;
    cin>>s;
    int x=s.size();
    int i,j,cnt=0;

    for(j=0; j<x; j++)
    {
        for(i=0; i<x-1;i++)
        {

            if(s[i]>s[i+1])
            {
                int temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
        }
    }

    for(i=0; i<x-1; i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
    }
    x=x-(cnt);

    if(x%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;

}
