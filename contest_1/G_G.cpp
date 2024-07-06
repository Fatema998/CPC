#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string a;
    a.push_back(s[1]);
    a.push_back(s[2]);
    a.push_back(s[0]);
    string b;
    b.push_back(s[2]);
    b.push_back(s[0]);
    b.push_back(s[1]);
    int frist = stoi(s);
    int snd = stoi(a);
    int third = stoi(b);
    int res = frist + snd + third;
    cout << res << endl;

    return 0;
}
