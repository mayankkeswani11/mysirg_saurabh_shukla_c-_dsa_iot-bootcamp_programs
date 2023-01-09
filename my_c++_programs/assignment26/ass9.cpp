/*8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.*/
#include<iostream>
using namespace std;
class Bank{
    private:
    float Principal_Amount;
    float Rate_of_interest;
    float Time;
    public:
    Bank(float a,float b,float c)
    {
        Principal_Amount=a;
        Rate_of_interest=b;
        Time=c;
        cout<<"\nprincipal amount :";
        cout<<Principal_Amount;
        cout<<"\nrate of interest :";
        cout<<Rate_of_interest;
        cout<<"\nTime period(years) :";
        cout<<Time;
    }
    int display()
    {
        float simple_interest;
        simple_interest=(Principal_Amount*Rate_of_interest*Time)/100;
        return simple_interest;

    }
};
int main()
{
    Bank b1(56000,76,2);
    cout<<"\nsimple interest  :"<<b1.display();
}