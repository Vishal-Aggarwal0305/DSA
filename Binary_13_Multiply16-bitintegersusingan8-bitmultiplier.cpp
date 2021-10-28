#include <iostream>
#include <bitset>
using namespace std;
 
// Multiply two 8–bit numbers `m` and `n` (unsigned char)
// and return a 16–bit number (unsigned short)
unsigned short multiply8bit(unsigned char m, unsigned char n) {
    return m*n;
}
 
// Multiply 16–bit integers using an 8–bit multiplier
int multiply16bit(int m, int n)
{
    unsigned char mLow = (m & 0x00FF);              // stores first 8–bits of `m`
    unsigned char mHigh = (m & 0xFF00) >> 8;        // stores last 8–bits of `m`
 
    unsigned char nLow = (n & 0x00FF);              // stores first 8–bits of `n`
    unsigned char nHigh = (n & 0xFF00) >> 8;        // stores last 8–bits of `n`
 
    unsigned short mLow_nLow = multiply8bit(mLow, nLow);
    unsigned short mHigh_nLow = multiply8bit(mHigh, nLow);
    unsigned short mLow_nHigh = multiply8bit(mLow, nHigh);
    unsigned short mHigh_nHigh = multiply8bit(mHigh, nHigh);
 
    // return 32–bit result (don't forget to shift `mHigh_nLow` and `mLow_nHigh`
    // by 1 byte and `mHigh_nHigh` by 2 bytes)
 
    return mLow_nLow + ((mHigh_nLow + mLow_nHigh) << 8) + (mHigh_nHigh << 16);
}
 
int main()
{
    // 16–bit numbers stored in a 32–bit integer
    int m = 23472, n = 2600;
 
    cout << m << " in binary is " << bitset<16>(m) << endl;
    cout << n << " in binary is " << bitset<16>(n) << endl << endl;
 
    cout << "Normal multiplication m × n = " << m * n << endl;
    cout << "Using 8–bit multiplier m × n = " << multiply16bit(m, n) << endl;
 
    return 0;
}





