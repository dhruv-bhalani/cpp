#include "myfunctions.cpp"


class meth1
{
protected:
    int choice;
    double X,Y,Z;
public:
    virtual void calculate() = 0;
};

class meth2 : public meth1
{
public:
    void calculate()
    {
        setchoice();

        switch (choice) 
        {
            case 1:
                cout << endl << "Enter Radius Of Circle : " ;
                X = getDouble();
                cout << endl << "Area Of Circle = " << 3.14 * X * X << endl;
                break;
            
            case 2:
                cout << endl << "Enter Base Of Triangle : " ;
                Y = getDouble();
                cout << "Enter Height Triangle : " ;
                Z = getDouble();
                cout << endl << "Area Of Triangle = " << 0.5 * Z * Y << endl;
                break;

            case 3:
                cout << endl << "Enter Height Of Rectangle : " ;
                Z = getDouble();
                cout << "Enter Width Of Rectangle : " ;
                X = getDouble();
                cout << endl << "Area Of Rectangle = " << Z * X << endl;
                break;

            default:
                cout << endl << "!! Invalid Choice !!" << endl;
                break;
        }
    }

    void setchoice()
    { 
        cout << "Press 1... For Get Area Of Circle" << endl;
        cout << "Press 2... For Get Area Of Triangle" << endl;
        cout << "Press 3... For Get Area Of Rectangle" << endl;
        cout << "Enter Your Choice : " ;
        choice = getint();
    }
};

