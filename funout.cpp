#include<iostream>

using namespace std;

class area{
public:
    int hight;
    int wight;
    int result();

};

inline int area::result()
{
    //int m=10;

    return hight*wight;
}

int main()
{
    area obj;
    //obj.wight = 30;
    cout<<"Enter the value of hight..";
    cin>>obj.hight;

    cout<<"Enter the value of wight..";
    cin>>obj.wight;

    cout<<"Hight is "<<obj.hight<<"\tWight is "<<obj.wight<<"\tResult is "<<obj.result()<<endl;
    return 0;
}
