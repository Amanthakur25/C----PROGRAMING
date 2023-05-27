#include <iostream>
using namespace std;
class polymorphism
{
public:
    void fun()
    {
        cout << "i am void function" << endl;
    }
    void fun(int n)
    {
        cout << "i am function with integer value" << endl;
    }
    void fun(double n)
    {
        cout << "i am a double function" << endl;
    }
};

int main()
{
    polymorphism a;
    a.fun();
    a.fun(4);
    a.fun(10.22);
    return 0;
}