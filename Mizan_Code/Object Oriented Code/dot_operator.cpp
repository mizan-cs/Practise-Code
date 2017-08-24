#include<iostream>

using namespace std;

class Sample{
public:
    void FuncA()
    {
        cout<<"This is function FuncA()"<<endl;
    }

    void FuncB()
    {
        cout<<"FuncB() is calling FuncA()"<<endl;
        FuncA();
    }

};

int main()
{
    Sample samp;
    samp.FuncA();
    samp.FuncB();

    return 0;
}
