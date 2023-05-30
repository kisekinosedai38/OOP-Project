#include <iostream>
#include <string.h>

using namespace std;
class person
{
public:
    char name[100];
    int age;
    int med_quantity;
public:
    void get_info()
    {
        cout << "Name of the member: ";
        cin.ignore();
        cin.getline(name,100);
        cout << "Age:";
        cin >> age;
        cout << "Medicine quantity:";
        cin.ignore();
        cin >> med_quantity;
    }
};
class medicine : public person
{
public:
    char name[100];
    int doses_p_day;
    int day;
    int recess;
    string purpose;
public:
    void get_details()
    {
        cout << "Name of the medicine: ";
        cin.ignore();
        cin.getline(name,100);
        cout << "Doses per day: ";
        cin >> doses_p_day;
        cout << "Treatment days: ";
        cin >> day;
        cout << "Time between doses (in hour): ";
        cin >> recess;
        cout << "Purpose of the medicine: ";
        cin.ignore();
        getline(cin, purpose);
    }
};
int main()
{
    int n;
    cout << "Hello" << endl;
    cout << "How many members are in medical attention in your family? :";
    cin >> n;
    cout << "We will help you attend to everyone, don't worry." <<endl;
    cout << "But first, you have to fill up everyone's details:"<<endl;
    for(int i = 1; i <= n; i++)
    {
        medicine a;
        a.get_info();
        while(a.med_quantity--)
        {
            a.get_details();
        }

        if(i != n)
        {
            cout << ">>>>>>Next Member<<<<<<" << endl;
        }
    }

    return 0;
}


