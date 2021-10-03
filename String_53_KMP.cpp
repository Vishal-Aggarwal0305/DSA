// C++ Program to implement the KMP algorithm to perform string matching

#include <iostream>
#include <string.h>
using namespace std;

// Function to implement the KMP algorithm
void KMP(string T, string P)
{
    // Length of both strings
    int M = T.length();
    int N = P.length();

    // if `P` is an empty string
    if (N == 0)
    {
        cout << "The pattern occurs at index 0";
        return;
    }

    // if T's length is less than that of P's
    if (M < N)
    {
        cout << "Pattern not found";
        return;
    }

    // `next[i]` stores the index of the next best partial match
    int next[N + 1];

    for (int i = 0; i < N + 1; i++)
        next[i] = 0;

    for (int i = 1; i < N; i++)
    {
        int j = next[i + 1];
        while (j > 0 && P[j] != P[i])
        {
            j = next[j];
        }

        if (j > 0 || P[j] == P[i])
        {
            next[i + 1] = j + 1;
        }
    }

    cout << "\n";
    // Display indexes where pattern occurs
    for (int i = 0, j = 0; i < M; i++)
    {
        if (T[i] == P[j])
        {
            if (++j == N)
            {
                cout << "The pattern occurs at index " << i - j + 1 << "\n";
            }
        }
        else if (j > 0)
        {
            j = next[j];
            i--; // since `i` will be incremented in the next iteration
        }
    }
}

// Driver Code
int main()
{
    string T, P;

    cout << "\nKMP Algorithm";
    // Enter the text and pattern
    cout << "\nEnter the text: ";
    cin >> T;
    cout << "Enter the pattern: ";
    cin >> P;

    // Function call to display indexes where pattern occurs
    KMP(T, P);

    return 0;
}