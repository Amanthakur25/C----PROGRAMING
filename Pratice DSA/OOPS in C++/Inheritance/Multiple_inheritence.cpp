#include<iostream>
using namespace std;
class A
{
    public:
    void func()
    {
        cout<<"function a"<<endl;
    }
};
class B
{
    public:
    void func2()
    {
        cout<<"function 2"<<endl;
    }
};
class C : public A,public B 
{
    public:
};
int main()
{
    C c;
    c.func();
    c.func2();
    return 0;
}