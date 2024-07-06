#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int a_c = a * c;
    int b_d = b * d;
    int res = a_c + b_d;
    cout << res << endl;

    return 0;
}