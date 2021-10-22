#include <iostream>
using namespace std;
class Teacher
{
protected:
    int teacherCode;
    char teacherName[20];
    char teacherSub[20];
    char teacherPub[20];
};
class Officer : protected Teacher
{
protected:
    int officerCode;
    char officerName[20];
    char officerGrade[10];
};
class Typist : protected Officer
{
    int typistCode;
    char typistName[20];
    int typistSpeed;
    long int typistWages;

public:
    Typist();
    ~Typist();
};
Typist ::Typist()
{
    cout << "\nEnter Details of Teacher :> " << endl
         << endl;

    cout << "Enter Name Of Teacher : ";
    gets(teacherName);
    cout << "Enter Code Of Teacher : ";
    cin >> teacherCode;
    cout << "Enter Subject Of Teacher : ";
    cin >> teacherSub;
    cout << "Enter Publication : ";
    gets(teacherPub);

    cout << "Enter Details of Officer :> ";

    cout << "Enter Name Of Officer : ";
    fflush(stdin);
    gets(officerName);
    cout << "Enter Officer Code : ";
    cin >> officerCode;
    cout << "Enter Officer Grade : ";
    cin >> officerGrade;

    cout << "Enter Details of Typist :> " << endl
         << endl;

    cout << "Enter Name Of Typist : ";
    fflush(stdin);
    gets(typistName);
    cout << "Enter Typist Code : ";
    cin >> typistCode;
    cout << "Enter Typist Speed : ";
    cin >> typistSpeed;
    cout << "Enter Typist Daily Wages : ";
    cin >> typistWages;
}
Typist ::~Typist()
{
    cout << "\n\n~~~~~~~~~~ Ouput ~~~~~~~~~~\n"
         << endl;

    cout << "Teacher's Details :> " << endl
         << endl;

    cout << "Code : " << teacherCode << endl;
    cout << "Name : " << teacherName << endl;
    cout << "Subject : " << teacherSub << endl;
    cout << "Publication : " << teacherPub << endl;

    cout << "Officer's Details :> " << endl
         << endl;

    cout << "Code : " << officerCode << endl;
    cout << "Name : " << officerName << endl;
    cout << "Grade : " << officerGrade << endl;

    cout << "Typist's Details :> " << endl
         << endl;

    cout << "Code : " << typistCode << endl;
    cout << "Name : " << typistName << endl;
    cout << "Speed : " << typistSpeed << endl;
    cout << "Daily Wages : " << typistWages << endl;
}
int main()
{
    Typist obj;
    return 0;
}
