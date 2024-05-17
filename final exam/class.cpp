#include"myfunctions.cpp"


class book
{
 private:
    int publishedYear,a,y;
    string title,author,b,c;

 public:    

    void setdata()
    {
        cout << "Enter array size: ";
        y=getint();

        int x[y];

        for(int i=0;i<y;i++)
        {
            cout<<"Enter the title of the book: ";
            cin>>b;
            cout<<"Enter the author of the book: ";
            cin>>c;
            cout<<"Enter the published year of the book: ";
            cin>>a;
        }
    }

    void getdata()
    {
        for(int i=0;i<y;i++)
        {
            cout<<"The title of the book is: "<<b<<endl;
            cout<<"The author of the book is: "<<c<<endl;
            cout<<"The published year of the book is: "<<a<<endl;
        }
    }
};