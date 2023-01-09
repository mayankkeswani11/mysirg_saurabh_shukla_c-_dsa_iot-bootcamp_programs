/*Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.*/
#include<iostream>
using namespace std;
class time{
    private:
        int hours;
        int minutes;
        int seconds;
        static int x;
    public:
        time operator>>(time &t)
        {
            cout<<"\nenter "<<++x<<" time";
            cout<<endl;
            cout<<"\nenter hours :";
            cin>>t.hours;
            cout<<"\nenter minutes :";
            cin>>t.minutes;
            cout<<"\nenter seconds :";
            cin>>t.seconds;
            cout<<endl;
            return t;
        }
        time operator<<(time &t)
        {
            cout<<"\nhours :";
            cout<<t.hours;
            cout<<"\n minutes :";
            cout<<t.minutes;
            cout<<"\n seconds :";
            cout<<t.seconds;
            cout<<endl;
        }
        bool operator==(time &t1,time &t2)
        {
            if(hours==t2.hours & minutes==t2.minutes & seconds==t2.seconds)
            {
                cout<<"\ntime is same";
            }
            else{
                cout<<"\ntime is not same";
            }
        }
};
int time::x;
int main()
{
    time cin1,t1,t2,cout1,cin2,cout2;
    cin1>>t2;
    cout1<<t2;
    cin2>>t1;
    cout2<<t1;
    t1==t2;
}