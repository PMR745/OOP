#include <iostream>
using namespace std;
class person
{
public:
    char name[400];
    int code;
    void input()
    {
        cout << "\n Enter the Details of Student for 'RK Group of Companies...'\n";
        cout << "\nEnter the name of the student : ";
        cin >> name;
        cout << endl
             << "Enter the code of the student : ";
        cin >> code;
    }
    void display()
    {
        cout << endl
             << "Student name is : " << name;
        cout << endl
             << "Student code is : " << code;
    }
};
class account : virtual public person
{
public:
    float pay;
    void getpay()
    {
        cout << endl
             << "Enter the per anum payment for " << name << " in $: ";
        cin >> pay;
    }
    void display()
    {
        cout << endl
             << "Payment for " << name << " in $ is: " << pay;
    }
};
class admin : virtual public person
{
public:
    int experience;
    void getexp()
    {
        cout << endl
             << "Enter the no.of years experience of " << name << " : ";
        cin >> experience;
    }
    void display()
    {
        cout << endl
             << "Experience of " << name << " is : " << experience << " years ";
    }
};
class master : public account, public admin
{
public:
    char n[200];
    void gettotal()
    {
        cout << endl
             << "Enter the previous company name of " << name << ": ";
        cin >> n;
    }
    void display()
    {
        cout << endl
             << "Previous Company name of " << name << " was : " << n;
        cout << endl
             << "\nNow Welcome to RK Group of Companies....\n";
    }
};
int main()
{
    master m1;
    m1.input();
    m1.getpay();
    m1.getexp();
    m1.gettotal();
    m1.person::display();
    m1.account::display();
    m1.admin::display();
    m1.display();
    return 0;
}