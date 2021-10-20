#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
 
// Function to check if triplet exists in an array with the given sum
bool isTripletExist(int nums[], int n, int target)
{
    // create an empty map
    unordered_map<int, int> map;
 
    // insert (element, index) pair into the map for each array element
    for (int i = 0; i < n; i++) {
        map[nums[i]] = i;
    }
 
    // consider each element except the last element
    for (int i = 0; i < n - 1; i++)
    {
        // start from the i'th element until the last element
        for (int j = i + 1; j < n; j++)
        {
            // remaining sum
            int val = target - (nums[i] + nums[j]);
 
            // if the remaining sum is found, we have found a triplet
            if (map.find(val) != map.end())
            {
                // if the triplet doesn't overlap, return true
                if (map[val] != i && map[val] != j) {
                    return true;
                }
            }
        }
    }
 
    // return false if triplet doesn't exist
    return false;
}
 
int main()
{
    int nums[] = { 2, 7, 4, 0, 9, 5, 1, 3 };
    int target = 6;
 
    int n = sizeof(nums) / sizeof(nums[0]);
 
    isTripletExist(nums, n, target) ? cout << "Triplet exists":
                                cout << "Triplet Don't Exist";
 
    return 0;
}
