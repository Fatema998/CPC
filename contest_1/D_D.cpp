#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int rainy, coudy;
    cin >> rainy >> coudy;
    int day = 7;
    int clear = day - rainy - coudy;
    cout << clear << endl;

    return 0;
}