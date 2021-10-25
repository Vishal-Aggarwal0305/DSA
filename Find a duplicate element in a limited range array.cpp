#include <iostream>
#include <vector>
using namespace std;
 
// Function to find a duplicate element in a limited range array
int findDuplicate(vector<int> const &nums)
{
    int n = nums.size();
 
    // create a visited array of size `n+1`
    // we can also use a map instead of a visited array
    vector<bool> visited(n + 1);
 
    // mark each array element as visited and
    // return it if seen before
    for (int i: nums)
    {
        // if the element is seen before
        if (visited[i]) {
            return i;
        }
 
        // mark element as visited
        visited[i] = true;
    }
 
    // no duplicate found
    return -1;
}
 
int main()
{
    // input array contains `n` numbers between 1 and `n-1` with one duplicate
    vector<int> nums = { 1, 2, 3, 4, 4 };
 
    cout << "The duplicate element is " << findDuplicate(nums);
 
    return 0;
}


