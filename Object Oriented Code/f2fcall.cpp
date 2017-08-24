#include<iostream>

using namespace std;

class A{
public:
    void FuncA()
    {
        cout<<"This is FuncA() i class A"<<endl;

    }
    void funcB()
    {
        cout<<"This is FuncB() in Class A"<<endl;
    }
};

class B{
public:
    A a1;
public:
    void FuncB1()
    {
        cout<<"This is FuncB1() in Class B calling FuncA() form Class A: "<<endl;

        a1.FuncA();
    }
};

int main()
{
    B b1;
    b1.FuncB1();

    return 0;
}
