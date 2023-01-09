#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
        complex(int a,int b)
        {
            cout<<"\nparameterized contructor called";
            real=a;
            img=b;
            cout<<endl;
        }
        complex()
        {
            cout<<"\ndefault contructor called";
            cout<<endl;
        }
        complex(complex &c)
        {
            cout<<"\ncopy contructor called";
            real=c.real;
            img=c.img;
            cout<<endl;
        }
        void display()
        {
            cout<<"\nreal= "<<real;
            cout<<"\nimg= "<<img;
            cout<<endl;
        }
        friend ostream& operator<<(ostream &os,complex c);
        friend istream& operator>>(istream &,complex c);
        
};
ostream & operator<<(ostream &os,complex c)
{
    cout<<"\noperator <<  called";
    os<<"\nreal= "<<c.real<<"\nimg= "<<c.img;
    return os;
}
istream & operator>>(istream &Is,complex c)
{
    cout<<"\noperator >>  called";
    cout<<"\nenter real and img numbers : ";
    Is>>c.real>>c.img;
}
int main()
{
    complex c1(4,5);
    complex c3,c4;
    complex c2=c1;
    c1.display();
    c2.display();
    cout<<c1<<c2;
    cin>>c3;
    c4=c3;
    c4.display();


}

    