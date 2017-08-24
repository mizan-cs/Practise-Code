#include<iostream>
using namespace std;
class Test
{
public:
    void Forever()
    {
        cout<<"This is a function without parameters"<<endl;
    }
    void Forever(int x)
    {
        cout<<"This is a function with 1 parameter"<<endl;

    }
    void Forever(int x,int y)
    {

        cout<<"This is a function with 2 parameters"<<endl;
    }
};
int main()
{
    Test t;
    t.Forever();
    return 0;

}
