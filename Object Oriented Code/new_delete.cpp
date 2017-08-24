#include<iostream>

using namespace std;

int main()
{
    int *ptr;

    ptr = new int(5);

    cout<<*ptr<<endl;

    *ptr = 100;

    cout<<*ptr<<endl;

    delete(ptr);

    cout<<*ptr<<endl;

    return 0;
}
