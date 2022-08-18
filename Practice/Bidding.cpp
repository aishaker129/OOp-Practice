#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x>y && x>z)
            cout<<"Alice"<<endl;
        else if(x<y && y>z)
            cout<<"Bob"<<endl;
            else
                cout<<"Charlie"<<endl;

    }
    return 0;
}
