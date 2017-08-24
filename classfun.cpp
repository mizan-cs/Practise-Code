#include<iostream>

using namespace std;

class area{
    public:

    int hight;
    int wight;

    int result();
};

int area::result()
{
    return hight*wight;
}

int main()
{
    area obj;

    obj.hight = 5;
    obj.wight = 6;

    cout<<"Area is "<<obj.result()<<endl;

    return 0;
}
