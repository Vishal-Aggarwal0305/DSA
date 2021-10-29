#include <iostream>
#include <vector>
using namespace std;
 
void printSpiral(vector<vector<int>> const &mat, int top, int bottom, int left, int right)
{
    // base case
    if (mat.size() == 0 || left > right) {
        return;
    }
 
    // print top row
    for (int i = left; i <= right; i++) {
        cout << mat[top][i] << " ";
    }
    top++;
 
    if (top > bottom) {
        return;
    }
    // print right column
    for (int i = top; i <= bottom; i++) {
        cout << mat[i][right] << " ";
    }
    right--;
 
    if (left > right) {
        return;
    }
    // print bottom row
    for (int i = right; i >= left; i--) {
        cout << mat[bottom][i] << " ";
    }
    bottom--;
 
    if (top > bottom) {
        return;
    }
    // print left column
    for (int i = bottom; i >= top; i--) {
        cout << mat[i][left] << " ";
    }
    left++;
 
    printSpiral(mat, top, bottom, left, right);
 
}
 
int main()
{
    vector<vector<int>> mat =
    {
        { 1, 2, 3, 4, 5},
        {16, 17, 18, 19, 6},
        {15, 24, 25, 20, 7},
        {14, 23, 22, 21, 8},
        {13, 12, 11, 10, 9}
    };
 
    int top = 0, bottom = mat.size() - 1;
    int left = 0, right = mat[0].size() - 1;
 
    printSpiral(mat, top, bottom, left, right);
 
    return 0;
}
