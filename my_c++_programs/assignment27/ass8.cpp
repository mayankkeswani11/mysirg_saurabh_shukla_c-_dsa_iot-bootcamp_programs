/*Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include <iostream>
#include <sstream>
using namespace std;
class Box{
    private:
    int l;
    int b;
    int h;
    public:
    Box()
    {
        l=0;
        b=0;
        h=0;
    }
    Box(int a,int b,int c)
    {
        l=a;
        b=b;
        h=c;
    }
    Box(Box &s)
    {
        l=s.l;
        b=s.b;
        h=s.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth ()
    {
        return b;
    }
    int getHeight ()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return l*b*h;
    }
    bool operator<(Box& s)
    {
        return (l<s.l)||(b<s.b&&l==s.l)||(h<s.h&&b==s.b&&l==s.l);
    }
    friend ostream& operator<<(ostream& ,Box &);
    
};
ostream& operator<<(ostream& out,Box &s)
    {
        out<<s.l<<" "<<s.b<<" "<<s.h;
        return out;

    }
int main()
{
    Box b1,b2(2,3,4);
    b2.getLength();
    b2.getHeight();
    b2.getBreadth();
    cout<<b1;
    bool x=b2<b1;
    
}