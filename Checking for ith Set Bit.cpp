#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t , n , i ;
    cin>>t;
    while(t--)
    {
        cin>>n>>i;

        int f = 1;
        f = f << i; //left shifting

        int result = n & f;

        if(result == 0)
        {
            cout<<"False"<<endl;
        }

        else
        {
            cout<<"True"<<endl;
        }
    }
}