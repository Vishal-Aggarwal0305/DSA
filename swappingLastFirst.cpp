#include <iostream>
#include <math.h>
using namespace std;
main()
{
    int num, last, first, digit = 0, a, copy, b = 0, swap;
    cout << "Enter the number:";
    cin >> num;
    copy = num;
    while (copy > 0) //fetching number of digits entered by user
    {
        copy = copy / 10;
        digit++;
    }

    int arr[digit];

    copy = num;
    for (int i = digit - 1; i >= 0; i--) //storing number in array
    {
        a = copy % 10;
        arr[i] = a;
        copy = copy / 10;
    }

    last = num % 10;        //fetch last digit
    b = pow(10, digit - 1); //fetch first digit
    first = num / b;

    arr[digit - 1] = first; //swapping
    arr[0] = last;

    cout << "\nAfter swapping first and last digit the number is:";

    for (int i = 0; i < digit; i++) //printing swapped
    {
        cout << arr[i];
    }
}
