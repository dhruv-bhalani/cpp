#include<iostream>

using namespace std;

class RBI
{
	protected:
		double ROI = 6.5;
	
public:	
		void getdata()
		{
			cout    <<"Bank : RBI" << endl
					<< "Rate of Interrest : " << ROI << "%";
		}
};

class SBI : public RBI

{	
public:	
		void getdata()
		{
			cout    <<endl <<"Bank : SBI" << endl
					<< "Rate of Interrest :" << ROI + 1 << "%";
		}	
};
class BOB : public RBI

{	
public:	
		void getdata()
		{
			cout    <<endl <<"Bank : BOB" << endl
					<< "Rate of Interrest :" << ROI + 1.75<< "%";
		}	
};
class ICICI : public RBI

{		
public:	
		void getdata()
		{
			cout    <<endl <<"Bank : ICICI" << endl
					<< "Rate of Interrest :" << ROI + 2 << "%";
		}	
};
