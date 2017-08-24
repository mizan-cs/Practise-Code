#include<iostream>
using namespace std;

class Base{
public:
        void ShowBaseMsg(){
                cout<<"This is Base"<<endl;
        }
};
class Derived:public Base{
public:
        void ShowDeriveMsg(){
                cout<<"This is Derived"<<endl;
        }
};

int main(){
        Base base;
        Derived derived;

        Base *ptr;
        ptr = &derived;

        return 0;
}
