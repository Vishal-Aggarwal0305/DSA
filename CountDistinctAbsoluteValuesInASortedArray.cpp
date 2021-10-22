#include <iostream>
#include <unordered_set>
#include <vector>
#include <cstdlib>
using namespace std;
 
// Returns the total number of distinct absolute values in a given input
int findDistinctCount(vector<int> &input)
{
    unordered_set<int> set;
    for (int const &i: input) {
        set.insert(abs(i));
    }
 
    return set.size();
}
 
int main()
{
    vector<int> input = { -1, -1, 0, 1, 1, 1 };
 
    cout << "The total number of distinct absolute values is "
         << findDistinctCount(input);
 
    return 0;
}
