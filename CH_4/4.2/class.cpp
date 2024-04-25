#include<iostream>

using   namespace std;

class hotel{
	private:
		
        int  id,raring,room,staff,establish;
        string name,type,location;
        
        static int s_id;
        static int z;
    public:    
        void setdata(){
        	
        	int a,i;
        	cout<<"enter Number of Hotel : ";
        	cin >> a;
				
        	hotel n[a];
        	
        	for(i=0;i<a;i++)
        	{
        	cout << "enter hotel"<< i++ <<"Detali"<<endl<<endl;
        	cout<<"enter Hotel name : ";
        	cin>> n[a].name;
        	cout<<"enter Hotel type : ";
        	cin>> n[a].type;
        	cout<<"enter Hotel raring : ";
        	cin>> n[a].raring;
        	cout<<"enter Hotel location : ";
        	cin>> n[a].location;
        	cout<<"enter Hotel establish : ";
        	cin>> n[a].establish;
        	cout<<"enter Hotel staff : ";
        	cin>> n[a].staff;
        	cout<<"enter Hotel room : ";
        	cin>> n[a].room;
        }
        	getdata(n,i,a);
		}
		 void getdata(hotel n[],int i,int a)
		 {
		 	for(i=0;i<a;i++)
		 	{
		   	cout<<"Hotel"<<i++<<"Deteli"<<endl<<endl;
			 cout<<"Hotel id :" <<s_id <<endl;
			 cout<<"Hotel name :" <<n[i].name <<endl;
			 cout<<"Hotel Type :" <<n[i].type <<endl;
			 cout<<"Hotel raring :" << n[i].raring <<endl;
			 cout<<"Hotel location :" << n[i].location <<endl;
			 cout<<"Hotel establish :" <<n[i].establish <<endl;
			 cout<<"Hotel staff :" <<n[i].staff <<endl;
			 cout<<"Hotel room :" <<n[i].room <<endl;
			 }
		 
		 } 
};
    int hotel::s_id = 101;
    int hotel::z=1;
