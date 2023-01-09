/*4. Write a C++ Program to Swap data using function template.*/
#include<iostream>
using namespace std;
template<class A, class B,class C>
C swap1(A a,B b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
int main()
{
    int a,b;
    cout<<"\nenter two number :";
    cin>>a>>b;
    swap1<int,int ,void >(a,b);
}