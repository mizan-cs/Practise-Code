#include<iostream>
using namespace std;

class Sample{
public:
        static int TotObj;
        static void printInfo()
        {
                cout<<"Total Object "<<TotObj<<endl;
        }
};

int Sample::TotObj = 0;

int main()
{
        //Sample::TotObj = 10;
        Sample::printInfo();

        return 0;
}
