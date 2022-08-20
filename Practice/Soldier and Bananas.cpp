#include<iostream>
using namespace std;
int main()
{
    int k,n,w,d = 0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
       d +=i*k;
    }
    if(d>n)
    {
         cout<<d-n<<endl;
    }
    else
    {
         cout<<"0"<<endl;
    }
    return 0;
}
