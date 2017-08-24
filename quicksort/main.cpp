#include<iostream>
#include<algorithm>
using namespace std;

int quicksort(int array[], int start, int end);
void divide(int array[], int start, int end);

int main()
{
    int i;
    int s=9;
    int array[]={15,2,7,6,11,8,4,16,5};

    divide(array,0,9-1);

    cout<<"After Soring............."<<endl;
    for(i=0;i<s;i++){
        cout<<array[i]<<"\t";
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
    int i,j,pivot;
    int moveptr_right=1;
    pivot=array[start];
    i=start;
    j=end;

    while(i<j){

        if(moveptr_right){

            if(array[j]<pivot){
                array[i]=array[j];
                i++;
                moveptr_right=0;
            }
            else{
                j--;
            }
        }
        else{
            if(array[i]>pivot){
                array[j]=array[i];
                j--;
                moveptr_right=1;
            }
            else{
                i++;
            }
        }
    }

    array[j]=pivot;
    return j;
}
