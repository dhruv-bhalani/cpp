#include"myfunctions.cpp"

class Password
{
    private:

    char pass[20];

    public:
  password()
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
                catch(...)
                {
                    cout << endl << "Your password must contain at least one capital letter !" << endl;
                }
    }
};

class Vote
{   private:
    int age;

    public:
    vote()
      {
        cout << "Enter your age : ";
        age = getint();
      
        try
        {
                if(age < 18)
                {
                    throw 0;
                }
                else
                {
                    cout << endl << "You can vote : " << endl;
                }
                
        }
        catch(int age)
                {
                    cout << endl << "You can't vote Until " << 18 - age <<" years" << endl;
                }
      }
};