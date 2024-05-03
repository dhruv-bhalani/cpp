#include<iostream>

using namespace std;

class calculate
{
	public:
		
		int v,w,x,y,z;		
};

class Operation :public calculate
{
	public:
		
		void calculate(int v,int w)
			{
				
				cout << "Addition is :" << v + w ;
			}	
	void calculate(int v,int w,int x)
			{
				
				cout << "Subtraction is :" << v - w - x ;
			}
	void calculate(int v,int w,int x,int y)
			{
				
				
				cout << "Multiplication is :" << v * w * x *y ;
			}		
	void calculate(int v,int w,int x,int y,int z)
			{
				
				cout << "Division is :" << v / w / x / y / z ;
			}				
};
