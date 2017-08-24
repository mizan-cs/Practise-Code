#include<iostream>

using   namespace std;

class Sample{
public:
        static int x,y;

        void SetXY(int a, int b)
        {
                x=a;
                y=b;
        }
        void PrintXY()
        {
                cout<<"X = "<<x<<"\tY = "<<y<<endl;
        }
};


int Sample::x;
int Sample::y;

int main()
{

        Sample smp1, smp2;

        smp1.SetXY(100,200);
        smp1.PrintXY();
        smp2.PrintXY();

        return 0;
}
