

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int p;
    while (cin >> p)
    {
        /* code */
        int k = p % 100;
        if (k <= 9)
        {
            cout << "K0" << k << endl;
        }
        else
        {
            cout << "K" << k << endl;
        }
    }

    return 0;
}