#include<iostream>
using namespace std;

class area
{
    int a,b,c,d,e,h,i;
    float g;

    public:
        area(float a)
        {
            cout << "Enter The Radius Of The Circle = " << endl;
            cin >> a;
            g = 3.14*a*a;
            cout << "Area Of The Circle Is = " << g << endl;
        }
        area(int b, int c)
        {
            cout << "Enter The Dimensions Of The Rectangle = "<< endl;
            cin >> b >> c;
            h = b*c;
            cout << "Area Of The Rectangle Is = " << h << endl;
        }
        area(double d, double e)
        {
            cout << "Enter The Dimensions Of The Triangle = " << endl;
            cin >> d >> e;
            i = 0.5*d*e;
            cout << "Area Of The Triangle Is = "<< i << endl;
        }
};
int main()
{
    area t(4.0, 5.0);
    area r(2, 3);
    area c(1.3);

    return 0;
}