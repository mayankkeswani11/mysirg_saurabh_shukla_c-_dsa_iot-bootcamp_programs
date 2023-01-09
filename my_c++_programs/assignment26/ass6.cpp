/* 6. Define a class student and write a program to enter student details using constructor
 and define member function to display all the details.*/
 #include<iostream>
using namespace std;
#include<string.h>
class student{
    private:
    int rollno;
    char name[20];
    float marks;
    public:
    student(int a,char n[],float f)
    {
        rollno=a;
        strcpy(name,n);
        marks=f;
    }
    void display()
    {
        cout<<"student roll number :"<<rollno<<endl;
        cout<<"student name :"<<name<<endl;
        cout<<"student's marks :"<<marks<<endl;
    }

};
int main()
{
    student s1(1,"mayank",78.5);
    s1.display();
    return 0;
}