
#include <iostream>
using namespace std;

class A
{
public:
    int km, m; 
};

class B : public A
{
public:
    void setdata()
    {
        cout << "Enter kilometer : ";
        cin >> km;
        cout << "Enter meter : ";
        cin >> m;
    }

    B operator+(B o2)
    {
        B tmp;
        tmp.km = 0;
        tmp.m = 0;

        tmp.km = this->km + o2.km;
        tmp.m = this->m + o2.m;

        while (tmp.m >= 1000)
        {
            tmp.m -= 1000;
            tmp.km++;
        }

        return tmp;
    }
};

