#include<stdio.h>

int main()
{
    int marks;

    scanf("%d",&marks);

    if(marks>=80){
        printf("Got A+");
    }
    else if(marks>=70){
        printf("Got A");
    }
    else if(marks>=60){
        printf("Got A-");
    }
    else if(marks>=50){
        printf("Got B+");
    }
    else if(marks>=40){
        printf("Got B-");
    }
    else if(marks>=33){
        printf("Got C");
    }
    else{
        printf("Fail!!!!\a\a\a");
    }

    return 0;
}
