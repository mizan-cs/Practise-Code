#include<iostream>
using namespace std;

class Base{
        int x,y;
public:
        Base(int i,int j){
                x=i;y=j;
                cout<<"Value of X and Y is "<<x<<","<<y<<endl;
        }
};

class Derived:public Base{
public:
        Derived():Base(10,100){}
};

int main(){
        Derived d1;

        return 0;
}
