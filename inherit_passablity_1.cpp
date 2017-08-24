#include<iostream>

using namespace std;

class Base{
        int b1;
protected:
        int b2;
public:
        int b3;

        Base(){
                b1=10;
                b2=10;
                b3=10;
        }
public:
        void ShowBaseMemValue(){
                cout<<b1<<"---"<<b2<<"---"<<b3<<endl;
        }
};

class Derived: public Base{
public:
        void ChangeBaseMemValue(){
                b2=20;
                b3=20;
        }
};

int main(){
        Base b1;
        Derived d1;

        b1.ShowBaseMemValue();
        d1.ChangeBaseMemValue();
        d1.ShowBaseMemValue();
        return 0;
}
