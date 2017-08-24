#include<iostream>

using namespace std;

class A{
public:
        int a;
        int b;

        void Add_AB()
        {
                cout<<"A+B = "<<a+b<<endl;
        }
};

class A a1;

void func1(void)
{
        cout<<"\n\nIn func1(): {a=15, b=15}: \n\t";

        a1.a=15;
        a1.b=15;
        a1.Add_AB();
}

int main()
{
        cout<<"\n\nIn Main(): {a=5, b=5}:\n\t";
        a1.a=5;
        a1.b=5;
        a1.Add_AB();

        func1();
        return 0;
}
