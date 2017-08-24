#include<iostream>
using namespace std;

template<class DataType>DataType Add(DataType a, DataType b)
{
    return a+b;
}
int main()
{
    cout<<Add(3,7)<<endl;

    return 0;
}
