#include "myfunctions.cpp"

class Animal
{
    private:
         ;
       string name,sound,a,b,c,d;
       public:
       
       void setName()
       {
           cout<<"Enter the name of the Animal: ";
           a=getstring();
           cout<<"Enter the name of the Animal: ";
           b=getstring();
       }  
       void setSound()
       {
            cout<<"Enter the sound of the Animal: ";
            c=getstring();
            cout<<"Enter the sound of the Animal: ";
            d=getstring();
       }

       void getName()
       {
            cout<<endl<<"Enter the name of the Animal : "<<a<<endl;
             cout<<"Enter the sound of the Animal : "<<c<<endl;
            
       }

       void getSound()
       { 
            cout<<endl<<"Enter the name of the Animal : "<<b<<endl;
            cout<<"Enter the sound of the Animal : "<<d<<endl;
       }

};