#include "class7.cpp"
int main()
{
    user();
    return 0;
}

void user()
{
    Circle c;
    Ractangle r;

    c.setData();
    r.setData();

    Shape *ptr[2];

    ptr[0] = &c;
    ptr[1] = &r;

    ptr[0]->display();
    ptr[1]->display();
}