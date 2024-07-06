#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int other_day, sunday;
    cin >> other_day >> sunday;
    int res = other_day * 6;
    int ans = res + sunday;
    cout << ans << endl;

    return 0;
}