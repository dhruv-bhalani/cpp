#include<iostream>

using namespace std;

class Admin
{
    protected:
            string c_name,term;
            double m_salary,e_salary,rev;
            int staff;

    
            void setcmpname()
            {
                cout << "Enter Company Name: ";
                cin >> c_name;
            }

            void setsalary()
            {
                cout << "Enter Manager Salary: ";
                cin >> m_salary;
            }

            void setempsalary()
            {
                cout << "Enter Employee Salary: ";
                cin >> e_salary;
            }
            void setstaff()
            {
                cout <<"Enter Company Staff ";
                cin >> staff;
            }
            void setrevenue()
            {
                cout << "Enter Anual Revenus of company";
                cin >> rev;
            }
            void can_term()
            {
                cout <<"Can Terminaterte(yes/no)";
                cin >> term;
            }

            void getcmpname()
            {
                cout << "Company Name: " << c_name << endl;
            }

            void getsalary()
            {
                cout << "Manager Salary: " << m_salary << endl;
            }

            void getempsalary()
            {
                cout << "Employee Salary: " << e_salary << endl;
            }

            void getstaff()
            {
                cout << "Company Staff: " << staff << endl;
            }

            void getrevenue()
            {
                cout << "Anual Revenus: " << rev << endl;
            }

            void getcan_term()
            {
                cout << "Can Terminaterte: " << term << endl;
            }
};

class manager: protected Admin
{
    public:

     void setemp_salary(int s)
        {
            e_salary = s;
        }
        void setstaff(int a)
        {
            staff = a;
        }

        void setcan_term(string b)
        {
            term = b;
        }

        void getemp_salary()
        {
            cout << "Employee Salary: " << e_salary << endl;
        }

        void getstaff()
        {
            cout << "Company Staff: " << staff << endl;
        }

        void getcan_term()
        {
            cout << "Can Terminaterte: " << term << endl;
        }
    
       
};

class Employee : protected manager
{
    public:

    void getemp_salary()
            {
                cout << "Employee Salary: " <<manager::e_salary << endl;
            }

            void getstaff()
            {
                cout << "Company Staff: " <<manager::staff << endl;
            }

            void getcan_term()
            {
                cout << "Can Terminaterte: " << manager::term << endl;
            }
       
};