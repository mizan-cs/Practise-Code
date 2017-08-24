#include<iostream>
using namespace std;

template<class DataType>DataType Sum(DataType elements[], int s)
{
    DataType sum=0;
    int i;
    for(i=0;i<s;i++){
        sum+=elements[i];

        return sum;
    }
}

int main()
{
    int score[]={70,80,90,50};
    int unit[]={15,45,35,25};
    double unitPrice[]={50.20,70.89,80.80,90.90};

    cout<<"Sum of Scores: \t"<<Sum(score,4)<<endl;
    cout<<"Sum of UnitPrice: \t"<<Sum(unitPrice,4)<<endl;
    cout<<"Sum of Unit: \t"<<Sum(unit,4)<<endl;

    return 0;
}
