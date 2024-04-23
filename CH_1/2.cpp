#include<iostream>

using namespace std;

int main()
{
	int sta,end,i,x=0;

	cout <<"Enter Starting Year : ";
	cin >> sta;
	cout <<"Enter Ending Year : ";
	cin >> end;
	
	int a[100];
	
	for(i=sta;i<=end;i++)
	{
		if(i % 4 == 0)
		{
			a[x] = i;
			x++;
		}
	}
	
	
	cout << endl << "Leap Year : " ;
	for(i=0;i<x;i++)
	{
		cout << a[i] << ",";
	}
	
	return 0;
}
