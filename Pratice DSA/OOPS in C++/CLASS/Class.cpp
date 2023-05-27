#include <iostream>
using namespace std;
class student
{
    string address; // this is private
    public:             // by default it is private;
    string name;
    int age;
    bool gender;

    void setaddress(string s)
    {
        address = s; // to set any vale to any private member of the class.
                     // also called setter function
    }
    void getaddress()
    {
        cout << address << endl; // for getting or printing (getter function)
    }

    void printInfo()
    {
        cout << endl;
        cout << "address :";
        void getaddress();
        cout << "name : ";
        cout << name << endl;
        cout << "age :";
        cout << age << endl;
        cout << "gender :";
        cout << gender << endl;
    }
};

int main()
{
    student a;
    a.name = "aman"; // another of doing this is by calling the constructor.
    a.age = 21;
    a.gender = 1;
    // uisng array
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        string s;
        cout << "enter the adddress :";
        cin >> s;
        arr[i].setaddress(s);
        cout << "name :";
        cin >> arr[i].name;
        cout << "age :";
        cin >> arr[i].age;
        cout << "gender :";
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }

    return 0;
}
