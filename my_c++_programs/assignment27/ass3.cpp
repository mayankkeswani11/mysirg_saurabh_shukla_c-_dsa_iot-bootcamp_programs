/*2. Write a C++ program to overload unary operators that is increment and decrement.*/
#include<iostream>
using namespace std;
class Number{
    private:
    int x;
    public:
    void setdata(int a)
    {
        x=a;
    }
    Number operator++()
    {

        Number temp;
        temp.x=x++;
        return temp;
    }
    Number operator--()
    {
        Number temp;
        temp.x=x--;
        return temp;
    }
    int showdata()
    {
        cout<<"\nvalue of x is :"<<x;
    }
};
int main()
{
    Number n1,n2,n3;
    n1.setdata(5);
    ++n1;
    n1.showdata();
    n2.setdata(4);
    --n2;
    n2.showdata();
}