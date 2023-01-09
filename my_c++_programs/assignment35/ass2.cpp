/*2. Write a C++ Program to find Largest among two numbers using function template.*/
#include<iostream>
using namespace std;
template<class A,class B,class C>
A largest(B a,C b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    float a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    cout<<"\nThe greater number is "<<largest<float,int,int>(a,b);
}