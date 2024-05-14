#include"myfunctions.cpp"

class Exception
{
private:
    int x,y,age;
    char pass[20];
    public:
      
      void divide()
      {
        cout << "Enter 1 number : ";
        x = getint();
        cout << "Enter 2 number : ";
        y = getint();
      
        try
        {
            if(y == 0)
            {
                throw y;
            }
            else
            {
                cout << "Result : " << x/y << endl;
            }
        }
        catch(int y)
        {
            cout << endl << "cannot divide by 0" << endl << endl;
        }
      }
      void vote()
      {
        cout << "Enter your age : ";
        age = getint();
      
        try
        {
                if(age < 18)
                {
                    throw age;
                }
                else
                {
                    cout << endl << "You can vote : " << endl;
                }
                
        }
        catch(int age)
                {
                    cout << endl << "You can't vote Until " << 18 - age <<"yers" << endl;
                }
      }
      void password()
    { 
        int i,count = 0;
        
            cout << "Enter your password : ";
            cin>>pass;

            for(i=0;pass[i]!='\0';i++)
            {
                if(pass[i]>='A' && pass[i]<='Z')
                {
                    count++;
                }
                
            }
            try
                {
                    if(count == 0)
                    {
                        throw count;
                    }
                    else
                    {
                        cout << endl << "Your password is valid !" ;
                    }
                }
                catch(int count)
                {
                    cout << endl << "Your password must contain atleast one capital letter !" << endl;
                }
    }
};
