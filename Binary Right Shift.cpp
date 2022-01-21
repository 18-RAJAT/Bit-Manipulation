#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t , n , i;
    cin>>t;

    while(t--)
    {
        cin>>n>>i;

       cout<<n<<" >> "<<" = "<<(n>>i)<<endl;
    }

}

/*
  N = N>>2;

  N = N>>i;
  N = N/(2^i)
*/