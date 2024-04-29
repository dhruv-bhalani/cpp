#include"class.cpp"
 int main()
 {
 	int a;
 	cout<<"enter Number of train :";
 	cin>>a;
 	
 	if(a>=3)
 	{
 		cout << "Enter Train Details"<<endl<<endl;
 		train m;
 		m.setdata(a);
 		
	 }
	 else
	 {
	 	cout << "Please Enter minimin 3 Number Train";
	 }
 }
