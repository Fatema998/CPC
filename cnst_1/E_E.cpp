// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     double a, b;
//     cin >> a >> b;
//     double d = a % b;
//     double r = a % b;
//     double real_number = a % b;
//     cout << d << " " << r << " " << setprecision(5) << real_number << endl;

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int div = a / b;
    int r = a % b;
    double dab = (double)a / b;
    cout << div << " " << r << " " << fixed << setprecision(5) << dab << endl;

    return 0;
}