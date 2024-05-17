#include"myfunctions.cpp"

class dog
{
    private:

        string name;

    public:
        void srtdata()
        {
             cout <<"Enter name dog" << endl;
        }
};

class cat:public dog
{
    public:
        void srtdata()
        {
             cout <<"Enter name cat" << endl;
        }
};

class 