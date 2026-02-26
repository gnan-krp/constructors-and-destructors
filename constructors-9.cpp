#include<iostream>
using namespace std;

class Complex
{
    int real, imag;

    public:
        Complex(int r = 0, int i = 0)
        {
            real = r;
            imag = i;
        }
        Complex(const Complex &c)
        {
            real = c.real;
            imag = c.imag;
        }
        Complex add(Complex c2)
        {
            Complex temp;
            temp.real = real + c2.real;
            temp.imag = imag + c2.imag;
            return temp;
        }
        void display()
        {
            if(imag >= 0)
            cout << real << " + " << imag << "i" << endl;

            else
            cout << real << " - " << -imag << "i" << endl;
        }
};
int main()
{
    Complex c1(5, 6);
    Complex c2(3, 8);

    Complex c3 = c1.add(c2);

    cout << "1st Complex Number = " << endl;
    c1.display();

    cout << "2nd Complex Number = " << endl;
    c2.display();

    cout << "Total Number = " << endl;
    c3.display(); 

    return 0;
}