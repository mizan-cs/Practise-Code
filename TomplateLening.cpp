#include<iostream>
#include<algorithm>
using namespace std;

template<class DataType>DataType add(DataType a, DataType b)
{
    return a+b;
}

int main()
{
    int iResult;
    double dResult;

    iResult=add(5,5);
    dResult=add(8.9,3.7);
    cout<<iResult<<endl;
    cout<<dResult<<endl;

    return 0;
}


