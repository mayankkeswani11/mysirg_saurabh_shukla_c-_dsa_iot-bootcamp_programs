/*2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/
#include<stdio.h>
#include<stdlib.h>
void average();
int main()
{
    average();
    return 0;
}
void average()
{
    int n;
    printf("\nenter the size of array :");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    float sum=0;
    float average;
    for(int i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    average=sum/n;
    printf("\nthe average is :%f",average);
    free(ptr);

}