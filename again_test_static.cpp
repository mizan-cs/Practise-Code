#include<iostream>

using namespace std;

class Sample{
public:
        static int you,me;

        static void relation()
        {
                cout<<"Relation is "<<you+me<<endl;
        }
};

int Sample::you=0;
int Sample::me=0;

int main()
{
         Sample::you=6;
         Sample::me=64;

        Sample::relation();

        return 0;
}
