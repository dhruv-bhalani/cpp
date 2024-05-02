#include<iostream>

using namespace std;

class A
{	protected:
	
		int id,experience;
		double salary;
		string name,add,email,contact,role,comp_name;
public:		
		void setdataA()
		{
			cout << "Enter Employee Id : ";
			cin >> id;
			cout << "Enter Employee name : ";
			cin >> name;
			cout << "Enter Employee role : ";
			cin >> role;
		}
}; 

class B : public A
{
	public:
		void setdataB()
		{
			cout << "Enter Employee salary : ";
			cin >> salary;
			cout << "Enter Employee experience : ";
			cin >> experience;
		}
};

class C : public B
{
	public:
		void setdataC()
		{
			cout << "Enter Employee comp_name : ";
			cin >> comp_name;
			cout << "Enter Employee address : ";
			cin >> add;
		}
		void getdataC()
		{
			cout << endl << "Employee name : " << name << endl;
			cout << "Employee role : " << role << endl;
			cout << "Employee salary : " << salary << endl;
		}
};

class D : public C
{
	public:
		void setdataD()
		{
			cout << "Enter Employee email : ";
			cin >> email;
			cout << "Enter Employee contact : ";
			cin >> contact;
		}
		void getdataD()
		{
			cout << endl << "Employee id : " << id << endl;
			cout << "Employee name : " << name << endl;
			cout << "Employee role : " << role << endl;
			cout << "Employee salary : " << salary << endl;
			cout << "Employee experience : " << experience << endl;
			cout << "Employee comp_name : " << comp_name << endl;
			cout << "Employee address : " << add << endl;
			cout << "Employee contact : " << contact << endl;
		}
};
