#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    Complex operator+ (Complex const &obj)
    {
        Complex res;
        res.img=img +obj.img;
        res.real=real+obj.real;
        return res;
    }
    void display()
    {
        cout<<real<<" i"<<img;
    }
};
int main()
{
    Complex c1(12,7) ,c2(6,7);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}