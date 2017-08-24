#include<iostream>
using namespace std;

class Sample{
    int x,y;
public:
    Sample(int a, int b)
    {
        x=a;
        y=b;
    }
    void printXY()
    {
        cout<<"\nX = "<<x<<" Y = "<<y<<endl;
    }
};

int main()
{
    Sample smp1(14,16), smp2(24,36);
    smp1.printXY();
    smp2.printXY();

    return
}
