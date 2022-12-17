#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    // Default Constructor
    student()
    {
        cout << "\nDefault Constructor\n";
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
    // Parameterized Constructor
    student(string n, int a)
    {
        cout << "\nParameterized Constructor" << endl;
        name = n;
        age = a;
        cout << "Name: " << name << "\nAge: " << age << endl;
    }

    // Destructor
    ~student()
    {
        cout << "\nDestructor Called" << endl;
    }
    // copy constructor
    student(const student &obj)
    {
        name = obj.name;
        age = obj.age;
        cout << "\nOutput by copy constructor\nName: " << name << "\nAge: " << age << endl;
    }
};
int main()
{
    student obj;
    student("Akash", 19);
    student obj1(obj);
    return 0;
}