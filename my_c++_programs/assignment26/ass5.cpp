/*5. Define a class Date and write a program to Display Dateand initialise date object
using Constructors.*/
#include<iostream>
using namespace std;
#include<string.h>
class Date{
    private:
    int day;
    char month[20];
    int year;
    public:
    Date()
    {
        day=01;
        strcpy(month,"january");
        year=2023;
    }
    void setdate(int ,char[]  ,int );
    void showdate()
    {
        cout<<"Date : ";
        cout<<day<<" : "<<month<<" : "<<year<<endl;
    }
};
void Date :: setdate(int a,char m[],int b)
{
        day=a;
        strcpy(month,m);
        year=b;
}
int main()
{
    Date d;
    d.setdate(04,"january",2023);
    d.showdate();
}