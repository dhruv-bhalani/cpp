#include "myfunctions.cpp"

class Complex
{
    private:
        int a,b;
    public:

        void setdata()
        {
            cout<<"Enter the number : ";
            a=getint();
            cout<<"Enter the number : ";
            b=getint();
        }  
        void getdata()
        {
            cout<<endl<<a+b<<endl;
        }  
};