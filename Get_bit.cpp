#include<iostream>
using namespace std;


int getBit(int n,int position)
{
   return((n & (1<<position))!=0);
}

int main()
{

    cout<<getBit(2,7)<<endl;
    return 0;


}