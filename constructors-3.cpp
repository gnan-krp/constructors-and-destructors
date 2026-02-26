#include<iostream>
using namespace std;

class reverseNumber
{
    int num, rev;

    public:
        reverseNumber(int n)
        {
            num = n;
            rev = 0;

            while(num != 0)
            {
                int remainder = num % 10;
                rev = rev * 10 + remainder;
                num = num/10;

            }
            cout << "Reverse Of The Number Is = " << rev << endl;
        }
};
int main()
{
    int n;
    cout << "Enter A Number = " << endl;
    cin >> n;
    reverseNumber r(n);

    return 0;
}