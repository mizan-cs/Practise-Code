// A C/C++ program for splitting a string
// using strtok()
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "my name is khan";
    char *word;
    char *t = strtok(str, " ");
    word = t;
    //printf("%s",word);
    while (t != NULL)
    {


        t = strtok(NULL, " ");
        word = t;


    }

    return 0;
}
