#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    // printf("%.2lf",a);
    // cout << a << endl;
    cout << fixed << setprecision(6) << a << endl;
    return 0;
}