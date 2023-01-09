/*7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.*/

#include<iostream>
using namespace std;
class Box{
    private:
    int l;
    int b;
    int h;
    public:
    Box(int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    Box()
    {
        l=0;
        b=0;
        h=0;
    }
    int volume()
    {
        int v;
        v=l*b*h;
        return v;
    }

};
int main()
{
    Box b1(3,4,5),b2;
    cout<<"\nvolume of box :"<<b1.volume();
    cout<<"\nvolume of box :"<<b2.volume();
}