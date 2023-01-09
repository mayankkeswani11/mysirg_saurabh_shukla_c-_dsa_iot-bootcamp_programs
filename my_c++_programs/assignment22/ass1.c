/*Define a function to input variable length string and store it in an array without
memory wastage.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    printf("\nenter size :");
    scanf("%d",&n);
    char *str=(char*)malloc(n*sizeof(char));
    scanf(" ");//very very very important line 
    gets(str);
    str=(char*)realloc(str,sizeof(char)*strlen(str));
    printf("%s",str);
    free(str);
    return 0;
}