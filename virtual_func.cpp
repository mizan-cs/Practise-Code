#include<iostream>
using namespace std;

class Base{
    public:
        virtual void Msg(){
            cout<<"massage form virtual a function of base Class"<<endl;
        }
        void NonVirtual(){
            cout<<"massage form Non Virtual Function of Base Class"<<endl;
        }
};

class Derived1:public Base{
    public:
        void Msg(){
            cout<<"massage form virtual a function of Derived1 Class"<<endl;
        }
        void NonVirtual(){
            cout<<"massage form non virtual a function of Derived Class"<<endl;
        }

};

class Derived2:public Base{
    //No Member
};


int main(){
    Base *baseptr;
    Derived1 d1;
    Derived2 d2;

    //---------------------------
    baseptr=&d1;
    baseptr->Msg();
    baseptr->NonVirtual();

    //--------------------------
    baseptr=&d2;
    baseptr->Msg();
    baseptr->NonVirtual();

    return 0;
}
