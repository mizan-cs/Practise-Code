#include<iostream>
using namespace std;

class Base{
public:
        Base(){
                cout<<"Base Constructor Called"<<endl;
        }
        ~Base(){
                cout<<"Base Destructor Called"<<endl;
        }
};

class Derived1: public Base{
public:
        Derived1(){
                cout<<"Derived1 Constructor Called"<<endl;
        }
        ~Derived1(){
                cout<<"Derived1 Destructor Called"<<endl;
        }
};

class Derived2: public Base{
public:
        Derived2(){
                cout<<"Derived2 Constructor Called"<<endl;
        }
        ~Derived2(){
                cout<<"Derived2 Destructor Called"<<endl;
        }
};

class Derived3: public Base{
public:
        Derived3(){
                cout<<"Derived3 Constructor Called"<<endl;
        }
        ~Derived3(){
                cout<<"Derived3 Destructor Called"<<endl;
        }
};

int main(){
        Derived1 d1;
        Derived2 d2;
        Derived3 d3;

        return 0;
}
