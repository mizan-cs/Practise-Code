#include<iostream>

using namespace std;

class Sample{
public:
        static int a,b,sum;
        static void result(int x,int y)
        {
                cout<<"Sum of "<<x<<" And "<<y<<" is "<<x+y<<endl;
        }
};

int Sample::a=30;
int Sample::b=50;

int main()
{
        Sample::result(Sample::a,Sample::b);

        return 0;
}
