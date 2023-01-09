/*Define a class StaticCount and create a static variable. Increment this variable in afunction and call this 3 times and display the result.*/
#include<iostream>
using namespace std;
class StaticCount{
    private:
        static int x;
    public:
        static int setA(){
            x++;
            return x;
        }
};
int StaticCount::x;
int main()
{
    StaticCount c1,c2,c3;
    cout<<"\n######Called by instance method######\n";
    cout<<c1.setA()<<endl;
    cout<<c2.setA()<<endl;
    cout<<c3.setA()<<endl;
    // static variable can be called by object but it is not a good to call with the object because it is not a instance member
    cout<<"\n######Called by static method######\n";
    cout<<StaticCount::setA()<<endl;
    cout<<StaticCount::setA()<<endl;
    cout<<StaticCount::setA()<<endl;
    // static variable must be called by membership syntax of scope resolution
    
}
