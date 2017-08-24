#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>

int main(){
        time_t getTime;
        struct tm *timeInfo;

        time(&getTime);
        timeInfo=localtime(&getTime);
        printf("%s",asctime(timeInfo));

        return 0;
}
