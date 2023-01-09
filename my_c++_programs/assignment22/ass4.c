/*4. Write a program to input and print text using dynamic memory allocation.*/
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
}