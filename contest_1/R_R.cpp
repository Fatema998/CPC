#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int a_ = pow(a, b);
    int b_ = pow(b, a);
    int sum = a_ + b_;
    cout << sum << endl;

    return 0;
}