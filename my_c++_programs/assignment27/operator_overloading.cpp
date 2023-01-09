#include<iostream>
using namespace std;
class person{
    int age;
    int rank;
    public:
        person(int a,int b)
        {
            age=a;
            rank=b;
        }
        person()
        {
            age=0;
            rank=0;
        }
        person(person &p)
        {
            age=p.age;
            rank=p.rank;
        }
        person operator++(int waste)
        {
            person temp;
            temp.age=age++;
            temp.rank=rank++;
            return temp;
        }
        void display()
        {
            cout<<"\nage ="<<age<<"\nrank ="<<rank;
        }
        person operator+(person p1)
        {
            person temp;
            temp.age=age+p1.age;
            temp.rank=rank+p1.rank;
            return temp;
        }
        person operator++()
        {
            person temp;
            temp.age=++age;
            temp.rank=++rank;
            return temp;
        }
        friend  ostream & operator<<(ostream &,person);
        friend istream & operator>>(istream&,person);
};
istream& operator>>(istream &is,person p)
{
    cout<<"\nenter age :";
    cin>>p.age;
    cout<<"\nenter rank :";
    cin>>p.rank;
}
ostream & operator<<(ostream&os,person p)
{
    cout<<"\nage ="<<p.age<<"\nrank ="<<p.rank;
}
int main()
{
     person f1(24,27),f2;
    int choice;
    while(1){
        cout<<"\n1.preincrement operator"<<"\n2.post increment"<<"\n3.input(>>) operator"<<"\n4.output(<<)operator"<<"\n5.display";
        cout<<"\nenter your choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
                
                cout<<"\npre-increment display";
                (++f1).display();
                break;
            case 2:
                
                cout<<"\npost-increment display";
                f1++.display();
                f1.display();
                break;
            case 3:
                cin>>f1;
                f1.display();
                break;
            case 4:
                cout<<f1;
                break;
            case 5:
                person f1(20,30),f2(20,40),f3;
                f3 = f1+f2;
                f3.display();

                break;
        }
    }
    // person p1(20,21);
    // person p2;
    // (p1++).display();
    // p1.display();
    // (++p1).display();
}