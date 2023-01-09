/*10. Find out the maximum and minimum from an array using dynamic memory allocation*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int max,min;
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
    max=*(ptr+0);
    min=*(ptr+0);
    for(int i=0;i<n;i++)
    {
        if(max<*(ptr+i))
        {
            max=*(ptr+i);
        }
        if(min>*(ptr+i))
        {
            min=*(ptr+i);
        }
    }
    printf("\n the largest element is : %d",max);
    printf("\n the largest element is : %d",min);
    free(ptr);
}