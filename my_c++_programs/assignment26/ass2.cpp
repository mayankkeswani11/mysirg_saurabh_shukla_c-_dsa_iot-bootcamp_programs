/*2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/
#include<iostream>
using namespace std;
class Time{
    private:
        int h;
        int m;
        int s;
    public:
        void setTime(int a,int b,int c)
        {
            h=a;
            m=b;
            s=c;
        }
        void showTime()
        {
            cout<<"time is : "<<h<<" : "<<m<<" : "<<s;
        }
};
int main()
{
    Time t;
    t.setTime(4,45,56);
    t.showTime();
}