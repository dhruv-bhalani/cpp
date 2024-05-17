#include "myfunctions.cpp"

class Person
{
private:

    string name,age,address,a,b,c;

public:

    void setdata()
    {
        cout<<"Enter name: ";
        a=getstring();
        cout<<"Enter age: ";
        b=getstring();
        cout<<"Enter address: ";
        c=getstring();
    }

    void getdata()
    {
        cout<<endl<<"Name: "<<a<<endl;
        cout<<"Age: "<<b<<endl;
        cout<<"Address: "<<c<<endl;
    }
};