// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     unsigned long long int a, b;

//     while (cin >> a >> b)
//     {

//         if (a % b == 0)
//         {
//             cout << a / b << endl;
//         }
//         else
//         {
//             cout << (a / b) + 1 << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    while (cin >> a >> b)
    {
        /* code */
        if (a % b == 0)
        {
            cout << a / b << endl;
        }
        else
        {
            cout << (a / b) + 1 << endl;
        }
    }

    return 0;
}