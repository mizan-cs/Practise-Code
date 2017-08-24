#include<iostream>
using namespace std;

class Base{
    public:
        void Msg(){
            cout<<"Massage form Base Class"<<endl;
        }
};

class Derived1:public Base{
    public:
        void Msg(){
            cout<<"Massage form Derived1 Class"<<endl;
        }
};

class Derived2:public Base{
    public:
        void Msg(){
            cout<<"massage Form Derived2 Class"<<endl;
        }
};

int main(){
    Base *baseptr;
    Derived1 d1;
    Derived2 d2;

    baseptr=&d1;
    baseptr->Msg();

    baseptr=&d2;
    baseptr->Msg();

    return 0;
}
