#include<iostream>

using namespace std;

//---------------------------Creating Simple class
class Sample{
public:
        Sample() { cout<<"Massage form Constructor Function"<<endl;}
        ~Sample() {cout<<"Massage form destructor Function"<<endl;}
};

//------------------------defining a test function

void FuncA(void)
{
        cout<<"\nCreating Sample object in a FuncA()"<<endl;
        Sample smp;
}

int main()
{
        cout<<"\nCreating Sample object in main()"<<endl;
        Sample smp;

        cout<<"\n\nCalling funcA()"<<endl;
        FuncA();

        cout<<"\n\nFuncA() Called"<<endl;

        return 0;
}
