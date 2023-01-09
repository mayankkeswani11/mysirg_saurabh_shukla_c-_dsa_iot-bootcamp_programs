
#include<iostream>
using namespace std;
#include<string.h>
class practice{
    private:
    int a,b;
    static int k;
    public:
    void setA(int x)
    {
        a=x;
    }
    int getA(){
        return a;
    }
    void setB(int y){
        b=y;
    }
    int getB(){
        return b;
    }
    static void setK(int z){
        k=z;
    }
    static int getK(){
        return k;
    } 
};
int practice::k;
int main()
{
    practice::setK(6);
    cout<<"\nk="<<practice::getK();
    return 0;
}
