#include "class.cpp"

int main()
{

    int c_qty, c_import,c_export, id, n, i, j=0;
    double revenue;
    string name, c_ceo;
    cout << "Enter the number of Companies : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << endl
             << endl
             << "Enter Company " << j + 1 << " Data" << endl
             << endl;
        cout << "Enter Company Name : ";
        cin >> name;
        cout << "Enter Staff Quantity : ";
        cin >> c_qty;
        cout << "Enter Company Revenue(per year) : ";
        cin >> revenue;
        cout << "Enter Import Raw Diamonds(per year) : ";
        cin >> c_import;
        cout << "Enter Export Raw Diamonds(per year) : ";
        cin >> c_export;
        cout << "Enter Company CEO Name : ";
        cin >> c_ceo;

        diamond a(name,c_qty,revenue,c_import,c_export,c_ceo);        
    }
    

    return 0;
}
