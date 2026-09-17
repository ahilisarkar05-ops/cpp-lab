#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    char name[64];
    int age;
    char address[64];
    float salary;

public:

    // Constructor
    Person()
    {
        strcpy(name, "");
        age = 0;
        strcpy(address, "");
        salary = 0;
    }

    // User defined input
    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter address: ";
        cin >> address;

        cout << "Enter total salary: ";
        cin >> salary;
    }

    // Inline function
    inline int getAge()
    {
        return age;
    }

    // Salary slip
    void salarySlip()
    {
        float basic, hra, da;

        basic = salary * 0.50;
        hra = salary * 0.20;
        da = salary * 0.30;

        cout << "\n-------------------------";
        cout << "\n       SALARY SLIP";
        cout << "\n-------------------------";
        cout << "\nName          : " << name;
        cout << "\nAge           : " << age;
        cout << "\nAddress       : " << address;
        cout << "\nBasic Salary  : " << basic;
        cout << "\nHRA           : " << hra;
        cout << "\nDA            : " << da;
        cout << "\nTotal Salary  : " << salary;
        cout << "\n-------------------------\n";
    }
};

int main()
{
    Person p[3];

    int youngest = 0, eldest = 0;

    for(int i = 0; i < 3; i++)
    {
        cout << "\nEnter details of Person " << i + 1 << ":\n";
        p[i].input();
    }

    for(int i = 1; i < 3; i++)
    {
        if(p[i].getAge() < p[youngest].getAge())
            youngest = i;

        if(p[i].getAge() > p[eldest].getAge())
            eldest = i;
    }

    cout << "\nYoungest person's age = "
         << p[youngest].getAge();

    cout << "\nEldest person's age = "
         << p[eldest].getAge() << endl;

    for(int i = 0; i < 3; i++)
    {
        p[i].salarySlip();
    }

    return 0;
}