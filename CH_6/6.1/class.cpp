#include<iostream>

using namespace std;

class X
{
	protected:
		int a,b,c;
		
};
class Y :public X
{
	public:
		
	void setdata()
	{
		cout << "Enter valus of A : ";
		cin >> a;
		cout << "Enter valus of A : ";
		cin >> b;
		cout << "Enter valus of A : ";
		cin >> c;		
	}
	void getdata()
	{
		cout << "Sum of all therr number cubes : "<< (a*a*a)+ (b*b*b) + (c*c*c) << endl;	
	}
};



class P
{
	protected:
			float temp;
	public:		
			void setdata1()
			{
				cout << "Enter Temperature in Celsius : ";
				cin >> temp;
				cout << endl <<  "Temperature is : " << temp  << " kelvin" << endl;
			}
};
class Q : public P
{
	public:
		
		void toFehrenhit()
		{
			cout << "Temperature is : " << (temp *1.8) + 32 << " Fehrenheit" << endl;
		}
};

class R : public Q
{
	public:
		
		void tokelvin()
		{
			cout << "Temperature is : " << temp +273.15 << " kelvin" << endl;
		}

};
