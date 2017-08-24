#include<iostream>
using namespace std;

int main()
{
    int arr_i[10000],n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr_i[i];
    }
    while(1)
    {
        int small_stick=arr_i[0];
        int remain=0;

        for(int i=0; i<n; i++)
        {
            if(arr_i[i]!=0)
            {
                remain++;
            }
        }

        if(remain==0)
        {
            break;
        }
        cout<<remain<<endl;

        for(int i=1; i<n; i++)
        {

            if(small_stick>arr_i[i]&&arr_i[i]!=0)
            {
                small_stick=arr_i[i];
            }

            if(small_stick==0){
                small_stick=arr_i[i];
            }
        }

        for(int i=0; i<n; i++)
        {
            if(arr_i[i]!=0)
            {
                arr_i[i]=arr_i[i]-small_stick;
            }
        }

    }



    return 0;
}
