#include<iostream>

using namespace std;

class train
{
	private:
		int t_number,i,number;
		string t_name,source,destination,time;
		
	public:
		
		void setdata(int a)
		{	
			train m[a];
			for(i=0;i<a;i++)
			{
				cout << "Enter Train Number : ";
				cin >>m[i].t_number;
				cout << "Enter Train Name : ";
				cin >>m[i].t_name;
				fflush(stdin);
				cout << "Enter Train source : ";
				cin >>m[i].source;
				fflush(stdin);
				cout << "Enter Train destination : ";
				cin >> m[i].destination;
				fflush(stdin);
				cout << "Enter Train time : ";
				cin >> m[i].time;
			}
			getdata(m,a);
		}
		
		void getdata(train m[],int a)
		{
			cout << endl;
			for(i=0;i<a;i++)
			{
				cout << "Train Number : "<< m[i].t_number << endl;
				cout << "Train Name : "<<m[i].t_name << endl;
				cout << "Train source : "<< m[i].source << endl;
				cout << "Train destination : "<<m[i].destination << endl;
				cout << "Train time : "<< m[i].time << endl;
			}
		}
		void getdata2(train m[],int a)
		{
			cout << endl << endl <<"Enter any Train number : ";
			cin>> num;
		
	 		for(i=0;i<a;i++)
	 		{
				if(m[i].t_number == number)
				{
					cout << "Train Number : "<< m[i].t_number << endl;
					cout << "Train Name : "<<m[i].t_name << endl;
					cout << "Train source : "<< m[i].source << endl;
					cout << "Train destination : "<<m[i].destination << endl;
					cout << "Train time : "<< m[i].time << endl;
				}
			}
		}
};
