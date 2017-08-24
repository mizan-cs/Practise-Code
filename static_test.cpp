#include<iostream>

using namespace std;

class Sample{
public:
        static int a,b;

        void SetAB(int x, int y)
        {
                a=x;
                b=y;
        }
        static void PrintAB()
        {
                cout<<"A= "<<a<<"\tB= "<<b<<endl;
        }
};

int Sample::a;
int Sample::b;

int main()
{
        Sample smp1;
        smp1.SetAB(100,200);

        Sample::PrintAB();
        smp1.PrintAB();

        return 0;
}
