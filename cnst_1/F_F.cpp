// #include <bits/stdc++.h>
// #define ll long long
// #include <math.h>
// const double PI = M_PI;
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int r;
//     cin >> r;
//     int seq = r * r;
//     double area = double(PI * seq);
//     double res = double(2 * r * PI);
//     cout << fixed << setprecision(6) << area << " " << res << endl;

//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long

// const double PI = atan(1.0) * 4;
#define M_PI 3.14159265358979323846

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double r;
    cin >> r;

    double seq = r * r;
    double area = M_PI * seq;
    double res = 2 * r * M_PI;

    cout << fixed << setprecision(6) << area << " " << res << endl;

    return 0;
}
