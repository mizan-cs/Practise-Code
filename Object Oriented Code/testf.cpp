#include<iostream>

using namespace std;

class A{
public:
    funcA()
    {
        cout<<"This is FunA() in class A"<<endl;
    }

};

class B{
    A b1;
public:
    FunB()
    {
        cout<<"This is FunB() is class B calling FunA() from class A:..."<<endl;
        b1.funcA();
    }
};

int main()
{

}
