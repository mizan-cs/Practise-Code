#include<iostream>
using namespace std;

int main()
{
        int *ptr;
        ptr=new int(7);
        cout<<*ptr<<endl;

        delete(ptr);

        return 0;

}
