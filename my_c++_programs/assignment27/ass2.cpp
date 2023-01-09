/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==*/
#include<iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex()
    {
        real=0;
        img=0;
    }
    void setdata(int a,int b)
    {
        real=a;
        img=b;
    }
    void showdata()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    complex operator+(complex &c)
    {
        complex temp;
        temp.real=c.real+real;
        temp.img=c.img+img;
        return temp;
    }
    complex operator-()
    {
        complex temp;
        temp.real=-real;
        temp.img=-img;
        return temp;
    }
    complex operator*(complex &c)
    {
        complex temp;
        temp.real=c.real*real;
        temp.img=c.img*img;
        return temp;
    }
    complex operator==(complex &c)
    {
        complex temp;
        temp.real=c.real;
        temp.img=c.img;
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(4,5);
    cout<<"operator+ is performed below "<<endl;
    c3=c1+c2;//c1 has called the operator + and c2 is passed as an argument;
    c3=c1.operator+(c2);//the meaning of above line is same as now written;
    c3.showdata();
    complex c4,c5;
    cout<<"operator- is performed below "<<endl;
    c4=-c1;//operator - is called
    c5=-c2;//operator - is called
    c4.showdata();
    c5.showdata();
    cout<<"operator* is performed below "<<endl;
    complex c6;
    c6=c1*c2;
    c6.showdata();
    cout<<"operator== is performed below "<<endl;
    complex c7;
    c7==c2;
    c7.showdata();


}
