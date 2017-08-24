#include<iostream>
using namespace std;

class Base{
public:
        void Show(){
                cout<<"Show() from Base class"<<endl;
        }
};

class Derived1:public Base{
public:
        void Show(){
                cout<<"Show() from Derived1 class"<<endl;
        }
};

int main(){
        Base *bp;
        Derived1 d1;
        bp=&d1;

        bp->Show();

        return 0;


}
