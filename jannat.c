#include<iostream>
#include<conio.h>
class Test{

public:
    int x,y;
    Test(int a,int b)
    {
    x=a;y=b;
    }
    void show()
    {
        cout<<"sum of two no:"<<x+y<<endl;
    }
};

void main()
{
    Test t1(10,5);
    t1.show();
    return 0;
}
