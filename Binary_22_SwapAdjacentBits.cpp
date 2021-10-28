#include <iostream>
#include <bitset>
using namespace std;
 
// Function to swap adjacent bits of a given number
inline int swapAdjacentBits(int n) {
    return (((n & 0xAAAAAAAA) >> 1) | ((n & 0x55555555) << 1));
}
 
int main()
{
    int n = 761622921;
 
    cout << n << " in binary is " << bitset<32>(n) << endl;
    n = swapAdjacentBits(n);
    cout << "\nAfter Swapping… " << endl;
    cout << n << " in binary is " << bitset<32>(n) << endl;
 
    return 0;
}




