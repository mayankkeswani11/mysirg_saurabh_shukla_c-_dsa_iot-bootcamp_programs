/*3. Write a C++ program to find the largest of three elements using a template.*/
#include<iostream>
using namespace std;
template<class A,class B,class C,class D=int>
D largest(A a,B b,A c)
{
    if(a>b){
        if(a>c)
        {
            return a;
        }
        
    }
    else{
        if(b>c)
        {
            return b;
        }
        else{
            return c;
        }
    }

    
}

int main()
{
    cout<<"\nthe gretaer number is :"<<largest<int,float,int,int>(5,6,9);
}
