#include<iostream>
using namespace std;

class Base{
public:
        virtual void vf1(){
                cout<<"\nThis is vf1() in Base class"<<endl;
        }
        virtual void vf2(){
                cout<<"This is vf2() in Base class"<<endl;
        }
        void nvf(){
                cout<<"This is non virtual functions in Base class"<<endl;
        }
};

class Derived1: public Base{
public:
        void vf1(){
                cout<<"This is vf1() in Derived Class"<<endl;
        }
        void vf2(){
                cout<<"This is vf2() in Derived Class"<<endl;
        }
        void nvf(){
                cout<<"This is non virtual function inDerived Class"<<endl;
        }
};

class Derived2: public Base{
        //Not redefined
};

class X{
        int x;
public:
        X(int p){
                x=p;
        }
        int GetX(){
                return x;
        }
};

int main(){
        Base *baseptr;
        Derived1 d11, d12;
        Derived2 d21;

        baseptr = &d11;

        baseptr->vf1();
        baseptr->vf2();
        baseptr->nvf();

        baseptr = &d21;

        baseptr->vf1();
        baseptr->vf2();

        return 0;
}
