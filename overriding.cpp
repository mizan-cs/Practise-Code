#include<iostream>
using namespace std;

class Base{
    public:
        void Msg(){
            cout<<"Massage form Base Class"<<endl;
        }
};

class Derived:public Base{
    public:
        void Msg(){
            cout<<"Massage form Derived Class"<<endl;
        }
};

int main()
{
    Derived d1;
    d1.Msg();

    return 0;
}
