/*5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("\nenter the size of array :");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("\nthe sum of elements is : %d",sum);
    free(ptr);

}