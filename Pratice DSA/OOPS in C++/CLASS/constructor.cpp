#include <iostream>
using namespace std;
class student
{
    string name;
    public:
    int age;
    bool gender;

    student()//default constructor
    {
        cout<<"default constructor"<<endl;
    }
    student(string s)// parametrised constructor
    {
        name = s;
    }
    student(student &a)// copy constructor
    {
        cout<<"copy constructor"<<endl;
        name=a.name;
    }
    ~student()
    {
        cout<<"destructor called"<<endl;
    }

    bool operator==(student &a) //operator overloading 
    {
        if(name==a.name)
        {
            return true;
        }
        return false;
    }
    void getname()
    {
        cout << name << endl;
    }
};
int main()
{
    student a("aman");
    a.getname();
    student b;
    student c=a;
    c.getname();
    if(a==c) //operator overloading 
    {
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same";
    }
    return 0;
}