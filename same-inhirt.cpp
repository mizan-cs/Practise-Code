#include<iostream>

using namespace std;

class Base{
public:
        void ShowMsg(){
                cout<<"Hello, Mizan. This is function from base class"<<endl;
        }
};

class Derived:public Base{
public:
        void ShowMsg(){
                cout<<"Hello, Mzian. This is function from Derived class"<<endl;
        }
};

int main(){
        Derived d1;
        d1.Base::ShowMsg();

        return 0;
}
