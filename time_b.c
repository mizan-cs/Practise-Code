#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

delay(unsigned int mseconds){
        clock_t goal=mseconds+clock();
        while(goal>clock());

}

int main(){

        delay(3000);
        time_t getTime;
        struct tm *timeInfo;
        time(&getTime);
        timeInfo=localtime(&getTime);
        printf("%s",asctime(timeInfo));

        return 0;
}
