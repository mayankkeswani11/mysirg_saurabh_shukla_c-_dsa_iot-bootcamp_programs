/*6. Write a program in C to find the largest element using Dynamic Memory Allocation.*/
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
    for(int i=0;i<n;i++)
    {
        if(*(ptr+0)<*(ptr+i))
        {
            *(ptr+0)=*(ptr+i);
        }
    }
    printf("\n the largest element is : %d",*(ptr+0));
    free(ptr);
}