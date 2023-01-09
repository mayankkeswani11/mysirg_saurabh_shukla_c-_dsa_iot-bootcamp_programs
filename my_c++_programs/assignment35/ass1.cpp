/*remaining :
7. Write a C++ Program of Templated class derived from Non-templated class.
8. Write a C++ Program to implement push and pop methods from stack using template.
9. Write a C++ Program to Perform Simple Addition Function Using Templates.
10. Write a C++ program to implement Hash Table using Template Class.*/
/*Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates.*/

#include<iostream>
using namespace std;
template<class T,class G=int,class F=int >
F  add(G x,T y){
    return (x+y);
}
int main()
{
    float a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    cout<<"the addition of two number is :"<<add<float,int,float>(a,b);
}