#include <iostream>

using namespace std;

int Add(int, int);

int main()
{
        int  a, b, c;
        a=5; b=6;
        c=Add(a,b);
    cout << "Result is :" << c<<".";
    return 0;
}

int Add(int x, int y)
{
        int z;
        z=x+y;
        return z;
}
