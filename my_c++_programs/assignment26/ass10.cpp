/*9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class Bill{
    private:
        float units;
        float amount,total_amount;
    public:
    void get(float a)
    {
        units=a;
        if(units<=100)
        {
            amount=units*1.20;
        }
        else{
            if(units<=200)
            {
                //units between 100 and 200

                amount=120+((units-100)*2);
            }
            else{
                amount=320+((units-200)*3);
            }
        }
    }
    int display()
    {
        return amount;
    }
};
int main()
{
    int unit;
    cout<<"\nEnter units :";
    cin>>unit;
    Bill b1;
    b1.get(unit);
    cout<<"\nelectricity bill is :"<<b1.display();
}
