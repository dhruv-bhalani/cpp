#include <iostream>

uing namespace std;

class Diamond()
{
private:
    int c_import, c_export, c_staff_qua;
    int c_id, n, i;
    string name;
    double c_revenue, c_ceo;

public:
    Diamond setdata(int id, int n)
    {
        cout << "nter Number of Diamond : ";
        cin >> a;
        Diamond n[a];

        for (i = 0; i < a; i++)
        {
            cout << "enter Diamond" << i++ << "Detali" << endl
                 << endl;
            cout << "enter Diamond name : ";
            cin >> n[a].c_name;
            cout << "enter Diamond c_staff_qua : ";
            cin >> n[a].c_staff_qua;
            cout << "enter Diamond c_revenue : ";
            cin >> n[a].c_revenue;
            cout << "enter Diamond c_import : ";
            cin >> n[a].c_import;
            cout << "enter Diamond c_export : ";
            cin >> n[a].c_export;
            cout << "enter Diamond c_ceo : ";
            cin >> n[a].c_ceo;
        }
    }

    ~Diamond getdata(int id,int n)
    {

    }
};
