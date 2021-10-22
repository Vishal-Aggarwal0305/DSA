#include <iostream>
using namespace std;
class student
{
    int rno;
    class name
    {
        public:
        char fname[10];
        char mname[10];
        char lname[10];
    }n;
    char sex[10];
    class dob
    {
        public:
        int dd;
        int mm;
        int yy;
    }d;
    class marks
    {
        public:
        int eng;
        int math;
        int pro;
    }m;

public:
    int input();
    void output();
};
int main()
{
    int num, *mark, top = 0, last = 300, po, po2;
    cout << "Enter the number of studets : ";
    cin >> num;
    student *s;
    mark = new int[num];
    s = new student[num];
    for (int i = 0; i < num; i++)
    {
        cout << "\nEnter details for student : " << i + 1;
        mark[i] = s[i].input();
    }
    cout << "\n\n----------------------------------------------------------------------------------------\n\n";
    for (int i = 0; i < num; i++)
    {
        if (top < mark[i])
        {
            po = i;
            top = mark[i];
        }
        if (last > mark[i])
        {
            po2 = i;
            last = mark[i];
        }
        cout << "\n\nDetails of student : " << i + 1;
        s[i].output();
    }
    cout << "\n\n----------------------------------------------------------------------------------------\n\n";
    cout << "\n\nStudent got highest marks\nTotal marks : " << top << endl;
    s[po].output();
    cout << "\n\nStudent got lest marks \nTotal marks : " << last << endl;
    s[po2].output();
    return 0;
}
int student::input()
{
    cout << "\nEnter the roll no : ";
    cin >> rno;
    cout << "\nEnter your name............";
    cout << "\nFirst name : ";
    cin >> n.fname;
    cout << "\nMid name : ";
    cin >> n.mname;
    cout << "\nLast name : ";
    cin >> n.lname;
    cout << "\nEnter your gender : ";
    cin >> sex;
    cout << "\nEnter your DOB.............";
    cout << "\nDay : ";
    cin >> d.dd;
    cout << "\nMonth : ";
    cin >> d.mm;
    cout << "\nYear : ";
    cin >> d.yy;
    cout << "\nEnter your marks...........";
    cout << "\nMaths : ";
    cin >> m.math;
    cout << "\nEnglis : ";
    cin >> m.eng;
    cout << "\nProgramming : ";
    cin >> m.pro;
    return m.math + m.pro + m.eng;
}
void student ::output()
{
    cout << "\n\nRoll no : " << rno;
    cout << "\n\nName : " << n.fname << " " << n.mname << " " << n.lname;
    cout << "\n\nGender : " << sex;
    cout << "\n\nDOB : " << d.dd << "/" << d.mm << "/" << d.yy;
    cout << "\n\nMarks...........";
    cout << "\n\nMaths : " << m.math;
    cout << "\n\nEnglis : " << m.eng;
    cout << "\n\nProgramming : " << m.pro;
}
