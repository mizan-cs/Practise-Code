#include<iostream>
#include<string.h>

using namespace std;
class Base{
public:
        int b;
        Base(){
                b=10;
        }

        void ShowMemValueInBase(){
                cout<<b<<endl;
        }
};

class Derived:public Base{
        int d;
public:
        Derived(){
                b=50;
                d=100;
        }
        void ShowMemValueInDerived(){
                cout<<b<<","<<d<<endl;
        }
};

int main(){
        Base b1;
        Derived d1;

        d1.ShowMemValueInBase();
        b1.ShowMemValueInBase();
        d1.ShowMemValueInDerived();

        return 0;
}
