#include<iostream>

using namespace std;

class Sample{
        int hight,wight;

public:
        Sample operator+(int x); //overloading operator
};
Sample Sample::operator+(int x)
{
        Sample temp;
        temp.hight = hight + x;
        temp.wight=wight+x;

        return temp;
}
