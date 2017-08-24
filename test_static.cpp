#include<iostream>
using namespace std;

class Sample{
public:
        static int totObj;
        static void PrintInfo()
        {
                cout<<"Total Object :"<<totObj<<"\n";
        }
};

int Sample::totObj = 0;

int main()
{
        Sample::totObj = 500;
        Sample::PrintInfo();
        return 0;
}
