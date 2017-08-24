#include<iostream>
using namespace std;

int quicksort(int array[],int start, int end);
void divide(int array[],int start,int end);

int main()
{
    int start,end,size=5;
    int array[]={3,8,1,9,4};

    divide(array,0,size-1);

    for(int i=0;i<size ;i++){
        cout<<array[i]<<endl;
    }

    return 0;

}

void divide(int array[], int start, int end)
{
    int pivot;

    if(start>=end){
        return;
    }
    else{
        pivot=quicksort(array,start,end);
        divide(array,start,pivot-1);
        divide(array,pivot+1,end);
    }
}

int quicksort(int array[], int start, int end)
{
    int pivot=array[start];
    int i=start,j=end;
    int leftptr_flag=1;

    while(i<j){
        if(leftptr_flag){
            if(array[j]<pivot){
                array[i]=array[j];
                i++;
                leftptr_flag=0;
            }
            else{
                j--;
            }
        }
        else{
            if(array[i]>pivot){
                array[j]=array[i];
                j--;
                leftptr_flag=0;
            }
            else{
                i--;
            }
        }
    }

    array[j]=pivot;
    return j;
}
