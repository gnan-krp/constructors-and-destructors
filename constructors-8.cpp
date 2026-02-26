#include<iostream>
using namespace std;

class test
{
    public:
        test(test &t)
        {
            cout << "copy" << endl;
        }
        test()
        {
            cout << "default" << endl;
        }
};
test fun()
    {
            cout << "Fun() called!";
            test t;
            return t;
    }
int main()
{
    test t1;
}