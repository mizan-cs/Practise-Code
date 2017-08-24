#include<iostream>
#include<stdio.h>

class SortedLargest{
private:
    int i,j,temp,getlarge,a[5];
public:
    /*Class Constructor*/
    SortedLargest(void){
        cout<<"Enter Five Integer(press ENTER after each value): \n"<<endl;

    for(i=0;i<5;i++){
        for{j=i+1;j<5;j++}{
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    /*Print Shorted Array*/
    cout<<"\n\nAfter Shorting :"<<endl;
    for(i=0;i<5;i++){
        cout<<a[i]<<" "<<endl;
    }

    }
};

void main()
{
    SortedLargest SL;

    return 0;
}
