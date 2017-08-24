#include<iostream>
using namespace std;

class Sample{
public:
        int a,b;
        void Add_ab()
        {
                cout<<"A+B = "<<a+b<<endl;
        }
};

int main()
{
        Sample a1,a2;

        a1.a=5;
        a1.b=10;
        a2=a1;

        a1.a=15;

        a1.Add_ab();
        a2.Add_ab();

        return 0;

}
