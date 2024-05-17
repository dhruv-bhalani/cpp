#include "functions.cpp"

class Shape
{
protected:
    string color;
    double area, h, w;

public:
    void setData()
    {
        CO << endl
           << "Enter Color : ";
        this->color = getString();

        CO << "Enter Height : ";
        this->h = getDouble();

        CO << "Enter Width or Radius : ";
        this->w = getDouble();
    }

    void getData()
    {
        CO << " Color is : " << this->color << endl
           << " Height is : " << this->h << endl
           << " Width or Radius is : " << this->w << endl;
    }

    virtual void display()
    {
        CO << "Color is : " << this->color << endl;
    }

    virtual void calcArea() = 0;
};

class Circle : public Shape
{
public:
    void setData()
    {
        CO << endl
           << "Enter Color : ";
        this->color = getString();

        CO << "Enter Width or Radius : ";
        this->w = getDouble();
    }
    void calcArea()
    {
        CO << endl
           << " Color is : " << color << endl
           << " Area of Circle is : " << w * 3.14 * w << endl << endl;
    }
    void display()
    {
        calcArea();
    }
};

class Ractangle : public Shape
{
public:
    void calcArea()
    {
        CO << " Color is : " << color << endl
           << " Area of Ractangle is : " << w * h << endl << endl;
    }
    void display()
    {
        calcArea();
    }
};
