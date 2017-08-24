#include<iostream>
using namespace std;

class Base{
public:
        virtual void msg(){
                cout<<"msg() from Base class"<<endl;
        }
                void nonVirtual(){
                cout<<"nonVirtual() from Base class "<<endl;
        }
};
class Derived1:public Base{
public:
        void msg(){
                cout<<"msg() from Derived1 class"<<endl;
        }
        void nonVirtual(){
                cout<<"msg() from Derived1 class"<<endl;
        }
};

class Derived2:public Base{
        //No Overrided Function

        void msg(){
                cout<<"Msg() from Derived2 class"<<endl;
        }
};

int main(){
        Base *baseptr;
        Derived1 d1;
        Derived2 d2;
        //-----------------------------------------------
        baseptr = &d1;
        baseptr->msg();
        baseptr->nonVirtual();
        //-------------------------------------------------
        baseptr = &d2;
        baseptr->msg();
        baseptr->nonVirtual();

        return 0;
}
