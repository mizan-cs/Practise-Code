#include<stdio.h>

/*Function to short the array*/

void GetSortedArray(int a[])
{
    int i,j,temp;

    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                temp = a[i];
                printf("a[%d] = %d\n",i,a[i]);
                a[i] = a[j];
                printf("a[%d] = %d\t a[%d] = %d\n",i,a[i],j,a[j]);
                a[j] = temp;
                printf("Temp = %d\n",temp);
            }
        }
    }

    /*Print the Short Array*/

    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
}

/*Function To get largest value*/

int GetLargestValue(int a[])
{
    int i,getLarge;

    getLarge = a[0];

    for(i=0;i<5;i++){
        if(a[i] > getLarge){
            getLarge = a[i];
        }
    }

    return (getLarge);
}

int main()
{
    int i,a[5];

    printf("Enter Five integer (Press ENTER after each value): \n");
    for(i=0;i<5;i++){

        scanf("%d",&a[i]);


    }

    printf("\n\nAfter Shorting : \n");
    GetSortedArray(a);

    printf("\n\nThe largest value is : %d",GetLargestValue(a));

    return 0;
}
