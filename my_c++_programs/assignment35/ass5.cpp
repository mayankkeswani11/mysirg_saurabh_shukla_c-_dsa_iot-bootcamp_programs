/*6. Write a C++ Program to find Sum of Array using function template.*/
#include<iostream>
using namespace std;
template<class A>
A sum()
{
    A arr[10];
    cout<<"Enter numbers :";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    float sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    cout<<"the sum of array is:"<<sum<float>();
}