#include<iostream>

using namespace std;

class shape
{
	protected:
		int height,width;
		
	public:
		
	shape()
	{
		cout << "Enter Height of shape : ";
		cin >> height;
		cout << "Enter width of shape : ";
		cin >> width;
	}	
	
};

class triangle :public shape
{
	public:
	void area()
	{
		cout << endl << "Area of triangle : "<< (height * width) / 2 << endl;
	}
};
class rectangle :public shape
{
	public:
	void area()
	{
		cout << endl << "Area of rectangle : "<< (height * width) << endl;
	}
};

class A
{
	protected:
		int n;
	public:
	 	void setdata()
		 {
		 	cout << endl << "Enter any number : ";
		 	cin >> n;
		 }
};
class square : public A
{
	public:
			void getsquare()
			{
				cout << "Square of "<< n <<" is : "<< n*n << endl;
			}	
};
class cube  : public A
{
	public:
			void getcube ()
			{
				cout<< "cube  of "<< n <<" is : "<< n*n*n << endl;
			}	
};





