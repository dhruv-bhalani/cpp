#include"class.cpp"

int main()
{
	char a;

	
	cout << "Press +.. For Addition" << endl ;
	cout << "Press -.. For Subtraction" << endl ;
	cout << "Press *.. For Multiplication" << endl ;
	cout << "Press /.. For Division" << endl ;
	cout << "Enter Your Choice : " ;
	cin >> a ;
	
	Operation n;
	
	switch(a)
		{
			case '+':
				cout << endl << "Enter 1 Number : " ;
				cin >> n.v ;
				cout << "Enter 2 Number : " ;
				cin >> n.w ;
				n.calculate(n.v,n.w);
				break;
			
			case '-':
				cout << endl << "Enter 1 Number : " ;
				cin >> n.v ;
				cout << "Enter 2 Number : " ;
				cin >> n.w ;
				cout << "Enter 3 Number : " ;
				cin >>n.x ;
				n.calculate(n.v,n.w,n.x);
				break;
				
			case '*':
				cout << endl << "Enter 1 Number : " ;
				cin >> n.v ;
				cout << "Enter 2 Number : " ;
				cin >> n.w ;
				cout << "Enter 3 Number : " ;
				cin >> n.x ;
				cout << "Enter 4 Number : " ;
				cin >> n.y ;
				n.calculate(n.v,n.w,n.x,n.y);
				break;
				
			case '/':
				cout << endl << "Enter 1 Number : " ;
				cin >> n.v ;
				cout << "Enter 2 Number : " ;
				cin >> n.w ;
				cout << "Enter 3 Number : " ;
				cin >> n.x ;
				cout << "Enter 4 Number : " ;
				cin >>n.y ;
				cout << "Enter 5 Number : " ;
				cin >> n.z ;
				n.calculate(n.v,n.w,n.x,n.y,n.z);
				break;
				
			default :
				cout << "Invalid Input " ;
		}
	
	return 0;
}

