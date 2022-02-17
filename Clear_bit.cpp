#include<bits/stdc++.h>
using namespace std;

int clearBit(int n,int position)
{
int mask=~(1<<position);

    return (n&mask);
}

int main()
{

    cout<<clearBit(8,3)<<endl;
    return 0;
    
}