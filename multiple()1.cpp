#include<iostream>
using namespace std;

class Base{
public:
        virtual void Msg(){
                cout<<"Msg() form Base Class"<<endl;
        }
};

class Derived1:public Base{
public:
        void Msg(){
                cout<<"Msg() form Derived1 Class"<<endl;
        }
};

class Derived2: public Base{
public:
        void Msg(){
                cout<<"Msg() form Derived2 class"<<endl;
        }
};

class Derived3: public Base{
        //No Member variable or function
};

int main(){
        Base *baseptr;
        Derived1 d1;
        Derived2 d2;
        Derived3 d3;

        baseptr = &d1;
        baseptr->Msg();

        baseptr = &d2;
        baseptr->Msg();

        baseptr = &d3;
        baseptr->Msg();

        return 0;
}
