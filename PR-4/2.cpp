#include"class.cpp"

int main()
{
    B o1, o2, o3;

    cout << "Input-1" << endl;
    o1.setdata();
    cout << "Input-2" << endl;
    o2.setdata();

    o3 = o1 + o2;

    cout << endl
         << "Total kilometer: " << o3.km << endl
         << "Total meter: " << o3.m;

    return 0;
}