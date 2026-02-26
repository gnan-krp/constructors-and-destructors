#include<iostream>
using namespace std;

class sum
{
    int x, y;
    float ans;

    public:
        sum(int a, double c)
        {
            ans = a+c;
            cout << "Ans = " << ans << endl;
        }
        sum(int a, int b)
        {
            ans = a+b;
            cout << "Ans = " << ans << endl;
        }
};

int main()
{
    sum(10, 23.0);

    return 0;
}