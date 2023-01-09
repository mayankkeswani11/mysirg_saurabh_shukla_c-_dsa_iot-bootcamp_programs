//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class cube{
    private:
        int size;
    public:
        cube()
        {
            size=0;
        }
        void setsize(int a)
        {
            size=a;
        }
        void volume()
        {
            cout<<"\nvolume of cube :"<<size*size*size;
        }
};
int main()
{
    cube c1;
    c1.setsize(8);
    c1.volume();
}
