/* C Program To Sort page in ascending order using bubble sort. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXSIZE 1024

typedef char * str;

int main(int argc, char *argv[])
{
    str temp, string;

    printf("%p\n", string);
    string = malloc(16);
    strcpy(string, "this is a test\n");
    fputs(string, stdout);
    printf("%p\n", string);
    return 0;
}