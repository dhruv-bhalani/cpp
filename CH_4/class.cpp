#include<iostream>

using namespace std;

class 
{
    private:
        
        int id,age;
        string name,course,city,email,college;

    public:

        void stedata()
        {
            student n[5];
            {
                for(int i = 0; i <5; i++)
                cout<<"student "<<i+1<<"id:";
                cin>>n[i].id;
                cout<<"student"<<i+1<<"name:";
                cin>>n[i].name;
                cout<<"student "<<i+1<<"age:";
                cin>>n[i].age;
                cout<<"student "<<i+1<<"course:";
                cin>>n[i].course;
                cout<<"student "<<i+1<<"city:";
                cin>>n[i].city;
                cout<<"student "<<i+1<<"email:";
                cin>>n[i].email;
                cout<<"student "<<i+1<<"college:";
                cin>>n[i].college

            }
            getdata(i,n)
        }

        void getdata(int i,student n[])
        {
            for(int i=0; i<n; i++)
            {
                cout << "student ID: " << n[i].id   << endl;
                cout << "student Name: " << n[i].name  << endl;
                cout << "student Age: "  <<n[i].age   << endl;
                cout << "student course: "   << n[i].course   << endl;
                cout << "student City: "    <<n[i].city  << endl;
                cout << "student email: "   <<n[i].email  << endl;
                cout << "student email: " <<n[i].college << endl;    
              }
        }
};