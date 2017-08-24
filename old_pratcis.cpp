#include<iostream>

using namespace std;

class Sample{
        static int a,b;
public:
        void setAB(int x, int y)
        {
                a=x;
                b=y;
        }
        void printAB()
        {
                cout<<"A= "<<a<<"\tB= "<<b<<endl;
        }
};

int Sample::a;
int Sample::b;


int main()
{
        Sample smp1,smp2;

        smp1.setAB(100,200);
        smp1.printAB();
        smp2.printAB();

        return 0;
}
