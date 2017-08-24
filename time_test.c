#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

int main(){
        time_t getTime;
        struct tm *timeInfo;

        time(&getTime);
        timeInfo=localtime(&getTime);
        printf("Time is: %s",asctime(timeInfo));

        return 0;
}
