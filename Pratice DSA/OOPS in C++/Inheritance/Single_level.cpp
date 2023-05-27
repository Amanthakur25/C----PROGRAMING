#include <iostream>
using namespace std;
class base
{
public:
    void func()
    {
        cout << "single level inheritrnce";
    }
};
class derived : public base
{
};

int main()
{
    derived d;
    d.func();
    return 0;
}