#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>
#include<dos.h>

void delay(unsigned int msec){
        clock_t gl=msec+clock();

        while(gl>clock());
}

int main ()
{
        time_t getTime;
        struct tm *currentTime;

        while(1){
                        time(&getTime);
                        currentTime=localtime(&getTime);
                        delay(1000);
                        system("cls");
                        printf("\t\t%s",asctime(currentTime) );
        }

  return 0;
}
