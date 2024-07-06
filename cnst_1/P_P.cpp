#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int area = a * b;
    int peramtr = (a + b) * 2;
    cout << area << " " << peramtr << endl;

    return 0;
}