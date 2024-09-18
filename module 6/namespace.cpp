#include<bits/stdc++.h>
using namespace std;
namespace rakib
{
    int age=24;
    void hello()
    {
        cout<<"rakib namespace"<<endl;
    }
}
namespace sakib
{
    int age2=28;
    void hello2()
    {
        cout<<"sakib namespace"<<endl;
    }
}
using namespace rakib;
using namespace sakib;
int main()
{
    cout<<age<<endl;
    cout<<age2<<endl;
    return 0;
}