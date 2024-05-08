#include<iostream>

using namespace std;

class higher
{
    int x;

    public:
    void setdata()
    {
        cout<<"Enter the value of x: ";
        cin>>x;
    }

    void getdata()
    {
        cout<<"maximun number : "<< x << endl;
    }

    higher operator<(higher S2)
    {
        if(x<S2.x)
        {
            return S2;
        }
        else
        {
            S2.x = x;
            
            return S2;
        }
    }
};