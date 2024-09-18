#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a= new int;
    *a=20;
    cout << "fun: " << a << endl;
    return a;
}
int main()
{
    int *p= fun();
    cout <<"main: " << p << endl;
    // int * a = new int;
    // *a=10;
    // cout << *a << endl;

    // float * f = new float;
    // *f= 1.23;
    // cout << *f << endl;
    return 0;
}