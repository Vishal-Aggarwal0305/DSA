#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int N = 1e6 + 2;

    bool check[N] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 0)
        {
            check[arr[i]] = 1;
        }
    }

    int ans = -1;
    for (int i = 0; i < N; i++)
    {
        if (check[i] == 0)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
