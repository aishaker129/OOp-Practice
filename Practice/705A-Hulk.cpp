#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str1 = "I hate";
    string str2= "I love";
    string str3 = "that";
    string str4 = "it";

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 )
        {
            cout << "I hate" << ' ';
            if (i==n)
            {
                cout << "it" << ' ';
            }
            else cout << "that" << ' ';

        }
        if (i % 2 == 0)
        {
            cout << "I love" << ' ';
            if (i==n)
            {
                cout << "it" << ' ';
            }
            else cout << "that" << ' ';
        }
    }


}
