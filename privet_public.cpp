#include<iostream>

using namespace std;

class rectangle{
private:
    int hight;
    int wight;
public:
    int set(int h, int w);
    int showr();

};

int rectangle::set(int h, int w)
{
    hight = h;
    wight = w;
    return hight*wight;
}
int main()
{
    rectangle obj;

    cout<<"Result is "<<obj.set(10,20)<<endl;

    return 0;
}

