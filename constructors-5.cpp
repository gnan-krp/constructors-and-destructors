#include<iostream>
using namespace std;

class Distance
{
    int meter;
    int centimeter;

    public:
        Distance(int m=0, int cm=0)
        {
            meter = m;
            centimeter = cm;
        }
        Distance(const Distance &d)
        {
            meter = d.meter;
            centimeter = d.centimeter;
        }
        Distance add(Distance d2)
        {
            Distance temp;
            temp.meter = meter + d2.meter;
            temp.centimeter = centimeter + d2.centimeter;

            if(temp.centimeter >= 100)
            {
                temp.meter += temp.centimeter/100;
                temp.centimeter = temp.centimeter % 10;
            }
            return temp;
        }
        void display()
        {
            cout << "Meter = " << meter << " Centimeter = " << centimeter << endl;
        }
};
int main()
{
    Distance d1(2,180);
    Distance d2(3,120);

    Distance d3 = d1.add(d2);

    cout << "1st Distance = " << endl;
    d1.display();

    cout << "2nd Distance = " << endl;
    d2.display();

    cout << "Total Distance = " << endl;
    d3.display(); 

    return 0;
}