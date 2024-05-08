#include<iostream>

using namespace std;
  
class message
{
    private:
        string s1="hello ", s2;
    public:
        message()
        {
            s2=s1;
        }

        void print()
        {
            cout<<s2<<endl;
        }
        
        void print(string s)
        {
            cout << s2+s<<endl;
        }
};