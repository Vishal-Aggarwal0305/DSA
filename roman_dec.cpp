#include <iostream>
#include <string.h>
using namespace std;
class romman
{
    string rno;
    int flag;
    void check();
    int rton(int);

public:
    romman()
    {
        cout << "Enter the romman number : ";
        cin >> rno;
        flag = 0;
        check();
        if (flag == 0)
        {
            int i = 0;
            int num = 0;
            while (rno[i] != '\0')
            {
                if (rton(i) >= rton(i + 1))
                {
                    num += rton(i);
                }
                else if (rton(i) < rton(i + 1))
                {
                    num = num + rton(i + 1) - rton(i);
                    i++;
                }
                i++;
            }
            cout << "\nNumber is : " << num << endl;
        }
    }
};
int romman::rton(int i)
{
    if (rno[i] == 'i' || rno[i] == 'I')
    {
        return 1;
    }
    else if (rno[i] == 'v' || rno[i] == 'V')
    {
        return 5;
    }
    else if (rno[i] == 'x' || rno[i] == 'X')
    {
        return 10;
    }
    else if (rno[i] == 'l' || rno[i] == 'L')
    {
        return 50;
    }
    else if (rno[i] == 'c' || rno[i] == 'C')
    {
        return 100;
    }
    else if (rno[i] == 'd' || rno[i] == 'D')
    {
        return 500;
    }
    else if (rno[i] == 'm' || rno[i] == 'M')
    {
        return 1000;
    }
    else if (rno[i] == '\0')
    {
        return 0;
    }
    else
    {
        flag = 1;
        cout << "\nInvalid Input!\n";
        return -1;
    }
}
void romman::check()
{
    int x = 0;
    int cnt;
    int ch=rton(0);
    for (int i = 0; rno[i] != '\0'; i++)
    {
        if (rton(i) == -1)
        {
            break;
        }
        else if (rton(i) != ch)
        {
            ch=rton(i);
            x = 1;
            if(cnt>1 && rton(i)>rton(i-1))
            {
                cout << "\nInvalid Input!\n";
                flag=1;
                break;
            }
            cnt=x;
        }
        else
        {
            x++;
            cnt = x;
            ch=rton(i);
            if (x > 3)
            {
                cout << "\nInvalid Input!\n";
                flag=1;
                break;
            }
            else if (cnt>3 && rton(i)!=rton(i-3))
            {
                cout << "\nInvalid Input!\n";
                flag=1;
                break;
            }
        }
    }
}
int main()
{
    romman n;
    return 0;
}
