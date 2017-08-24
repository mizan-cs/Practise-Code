#include<iostream>

using namespace std;

class Sample {
public:
        static int TotObj;
        static void PrintInfo()
        {
                cout<<"total value "<<TotObj<<endl;
        }

};

int Sample::TotObj;

int main()
{
        Sample::TotObj=100;

        Sample::PrintInfo();

        return 0;
}
