#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string a="Hello";
    // string b="A";
    // a+=b;
    // b.append(a);
    // cout<<a<<endl;
    // cout<<b<<endl;
    //a="HelloA";-> works
    //a=a+"A";-> works
    // a=a+b;-> works
    // a[5]='A';-> didn't work
    // a.push_back('B'); //works
    // a.pop_back();
    // a.pop_back();
    // a.pop_back();
    // cout<<a<<endl;

    // a="gello";
    // a.assign("gello");
    // cout<<a<<endl;

    string a="mypassion";
    // a.erase(4,1);
    a.replace(4,1,"s");
    // a.insert(2,"akash");
    cout<<a<<endl;
    return 0;
}