#include<iostream>
using namespace std;

class student
{
    int roll;
    string name;

    public:
        student()
        {
            roll = 10;
            name = "gnan";
            cout << "Constructor Called!" << endl;
        }
        void display()
        {
            cout << "Name Of The Student Is = " << name << endl;
            cout << "Roll Number Of The Student Is = " << roll << endl;
        }
}s;

int main()
{
    s.display();

    return 0;
}