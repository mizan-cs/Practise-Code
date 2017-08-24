#include<iostream>
using namespace std;

class Sample{
public:
        static int countObj;
        static void printline()
        {
                cout<<"Total Object is : "<<countObj<<"\n";
        }

};

int Sample::countObj = 0; //Define Static Variable

int main()
{
        Sample::countObj = 1000;
        Sample::printline();

        return 0;
}
