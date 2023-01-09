#include<iostream>
using namespace std;
class complex{
 private:
    int real;
    int img;
    static int x;
   /* complex()
    {
        real=0;
        img=0;
    }
    complex(int a,int b)
    {
        real=a;
        img=b;
    }
    complex(int x)
    {
        real=x;
        img=0;
    }
    complex(complex &c)
    {
        real=c.real;
        img=c.img;
    }*/
    /*void setdata()
    {
        real++;
        x++;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }*/
};
int complex::x=10;
int main()
{
    complex c1;
    cout<<endl;
}