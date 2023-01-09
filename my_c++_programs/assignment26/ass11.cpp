#include<iostream>
using namespace std;
class Complex{
    private :
    int real;
    int img;
    public:
    void setdata(int a,int b){
        real=a;
        img=b;
    }
    int showdata(){
        cout<<"\ncomplex number is :"<<real<<" + "<<img<<"i";
    }
    Complex add(Complex c) //method creation
    {
        Complex temp;
        temp.real=c.real+real;
        temp.img=c.img+img;
        return temp;
    }
    Complex operator+(Complex c) //operator creation
    { 
        Complex temp;
        temp.real=c.real+real;
        temp.img=c.img+img;
        return temp;
    }
    Complex operator-()
    {
        Complex temp;
        temp.real=-real;
        temp.img=-img;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    c1.setdata(4,5);
    c2.setdata(5,6);
    c1.showdata();
    c2.showdata();
    c3=c1.add(c2);
    c4=c1+c2;//operator calling and  we can call these ball normal method calling also
    c5=c1.operator+(c2);
    c3.showdata();//calling by method
    c4.showdata();//calling directly by operation
    c5.showdata();//calling by operator name 
    cout<<endl<<endl;
    cout<<"unary operator calling \n";
    c6=-c1;
    c6.showdata();
    c6=-c2;
    c6.showdata();
    c6=-c3;
    c6.showdata();
    c6=-c4;
    c6.showdata();
}
