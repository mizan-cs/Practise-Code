#include<iostream>
using namespace std;

template<class DataType>DataType add(DataType a, DataType b){
    return a+b;
}

int main(){
    cout<<"Sum1 is :"<<add(23,67)<<endl;
    cout<<"Sum2 is :"<<add(2.6,5.8)<<endl;

    return 0;
}
