#include<iostream>
using namespace std;

class Base{
public:
        Base(){
                cout<<"Creating Object of type Base................"<<endl;
        }
        virtual void Msg(){
                cout<<"Msh() form Base Class"<<endl;
        }
        virtual ~Base(){
                cout<<"Destroying object of type Base..................."<<endl;
        }
};

class Derived: public Base{
        int *p;
public:
        Derived(){
                p=new int[10];
                cout<<"creating Object of type Derived................"<<endl;
        }
        virtual void Msg(){
                cout<<"Msg() for Class Derived that inherits Base"<<endl;
        }
        ~Derived(){
                delete[] p;
                cout<<"Destroying Object of type D  erived......................"<<endl;
        }

};

int main(){
        Base *bptr =new Derived;
        bptr->Msg();
        delete bptr;

        return 0;
}
