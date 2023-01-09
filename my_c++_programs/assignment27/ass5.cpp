/*7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.*/ 
#include<iostream>
using namespace std;
class fraction{
    int numerator;
    int denominator;
    public:
        fraction(){
            numerator=0;
            denominator=0;
        }
        fraction(int a,int b)
        {
            numerator=a;
            denominator=b;
        }
        fraction(fraction &f)
        {
            numerator=f.numerator;
            denominator=f.denominator;
          
        }
        fraction operator++()
        {
            fraction temp;
            temp.numerator=++numerator;
            temp.denominator=++denominator;
            return temp;
        }
        fraction operator++(int useless)
        {
            fraction temp;
            temp.numerator=numerator++;
            temp.denominator=denominator++;
            return temp;
        }
        // fraction operator>>(fraction f)
        // {
        //     fraction temp;
        //     cout<<"\nenter numerator = ";
        //     cin>>f.numerator;
        //     temp.numerator=f.numerator;
        //     cout<<"\nenter denominator = ";
        //     cin>>f.denominator;
        //     temp.denominator=f.denominator;
        //     return temp;

        // }
        // fraction operator<<(fraction f)
        // {
        //     fraction temp;
        //     cout<<"\n numerator = ";
        //     temp.numerator=f.numerator;
        //     cout<<temp.numerator;
        //     cout<<"\n denominator = ";
        //     cout<<temp.denominator;

        // }

        void display()
        {
            cout<<"\nnumerator = "<<numerator<<"\ndenominaator = "<<denominator;
        }
};
int main()
{
    int choice;
    fraction f1(40,30);
    fraction f2=f1;
    fraction f3;
    while(1){
        cout<<"\n1.preincrement operator"<<"\n2.post increment"<<"\n3.input(>>) operator"<<"\n4.output(<<)operator"<<"\n5.display";
        cout<<"\nenter your choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
                ++f2;//pre
                break;
            case 2:
                f1++.display();
                f1.display();
                (++f1).display();
                break;
            case 3:
                //f1>>f2;
                break;
            case 4:
               // f1<<f2;
                break;
            case 5:
                f2.display();
                break;
        }
    }
}