/*6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/
#include<iostream>
using namespace std;
#include<cstring>
class CString{
    char c[10];
    public:
    void input()
    {
        cin>>c;
    }
    void display()
    {
        cout<<c;
    }
    bool operator==(CString &s)
    {
        if(strcmp(c,s.c)==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    CString c1,c2;
    c1.input();
    cout<<"\nthe first string is :";
    c1.display();
    c2.input();
    cout<<"\nthe second string is :";
    c2.display();
    if(c1==c2)
    {
        cout<<"\nequal";
    }
    else{
        cout<<"\nnot equal";
    }
}