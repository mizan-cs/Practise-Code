#include<iostream>

using namespace std;

class Sample{
public:
        static int TotObj;
        static void PrintInfo()
        {
                cout<<"\nTotal Object: "<<TotObj<<endl;
        }
};

int Sample::TotObj=0;

int main()
{
        Sample::TotObj=10;
        Sample::PrintInfo();

        return 0;
}
