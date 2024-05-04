#include<iostream>
using namespace std;

class Cricket
{
public:
	int a1,b2;
};

class T20 : public Cricket
{
public:
    void getTotalovers(int a1)
    {
        cout << "Total Overs In T20 Matches : " << a1 << endl;
    }
};

class Testmatch : public Cricket
{
public:
    void getTotalovers(int b2)
    {
        cout << "Total Overs In Test Matches : " << b2 << endl;
    }
};
