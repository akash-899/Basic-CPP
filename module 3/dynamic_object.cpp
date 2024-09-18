#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
int main()
{
    Student rahim(40,6,4.87);
    Student* karim = new Student(40,6,4.87);
    cout<< karim->roll<< " " <<karim->cls<< " "<<karim->gpa<<endl;
    return 0;
}