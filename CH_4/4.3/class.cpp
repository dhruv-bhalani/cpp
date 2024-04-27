#include <iostream>

using namespace std;

class diamond
{
private:
	int c_qty, c_import, c_export, id, n, i;
	double revenue;
	static int c_id;
	string name, c_ceo;

public:
	diamond(string name, int c_qty, int revenue, int c_import, int c_export, string c_ceo)
	{
		this->name = name;
		this->c_qty = c_qty;
		this->revenue = revenue;
		this->c_import = c_import;
		this->c_export = c_export;
		this->c_ceo = c_ceo;
	}

	void getdata()
	{
		cout << endl
			 << endl
			 << endl;
		cout << "Company Id : " << c_id++ << endl;
		cout << "Company Name : " << name << endl;
		cout << "Staff Quantity : " << c_qty << endl;
		cout << "Revenue Per Year : " << revenue << endl;
		cout << "Import Raw Diamonds(per year) : " << c_import << endl;
		cout << "Export Raw Diamonds(per year) : " << c_export << endl;
		cout << "CEO : " << c_ceo << endl;
	}

	~diamond()
	{
		this->getdata();
	}
};

int diamond::c_id = 101;

class Cafe
{
private:
	int id, rate, s_qty, e_year, i, j;
	string name, type, loation;
	static int s_id;
	static int a;

public:
	Cafe()
	{
		cout << endl
			 << "Enter Cafe " << a++ << " details" << endl
			 << endl;
		this->setdata();
	}

	void setdata()
	{

		cout << endl
			 << "Enter Cafe Name : ";
		cin >> name;
		cout << "Enter Cafe Type(Normal/Rooftop) : ";
		cin >> type;
		cout << "Enter Cafe Rating(1Star To 7Star) : ";
		cin >> rate;
		cout << "Enter Cafe Location(City) : ";
		cin >> loation;
		cout << "Enter cafe Establish Year : ";
		cin >> e_year;
		cout << "Enter Cafe Staff Quantity : ";
		cin >> s_qty;
	}

	void getdata()
	{
		cout << endl
			 << "Hotel Id : " << s_id++ << endl;
		cout << "Hotel Name : " << name << endl;
		cout << "Hotel Type : " << type << endl;
		cout << "Hotel Rating : " << rate << " Star"<<endl;
		cout << "Hotel Location : " << loation << endl;
		cout << "Hotel Establish Year : " << e_year<< endl;
		cout << "Hotel Staff Quantity : " << s_qty << endl;
	}

	~Cafe()
	{
		cout << endl
			 << "Cafe details" << endl
			 << endl;
		this->getdata();
	}
};

int Cafe::s_id = 101;
int Cafe::a = 1;
