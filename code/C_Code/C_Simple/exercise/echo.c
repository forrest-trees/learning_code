#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*char input;
    while ((input = getchar()) != '#')
        putchar(input);*/
    
    //filr.eof.c
    int output;
    FILE * fp;
    char fname[50];
    printf("put your file name: ");
    scanf("%s",fname);
    fp = fopen(fname,"r");
    if (fp == NULL)
    {
        printf("fail to open your file.Bye \n");
        exit(1);
    } 
    while ((output = getc(fp)) != EOF)
    {
        putchar(output);
    }
    fclose(fp);
    return 0;
}