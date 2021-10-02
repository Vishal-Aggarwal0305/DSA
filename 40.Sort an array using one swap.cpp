#include <bits/stdc++.h>
using namespace std;

void swap(vector<int>& vec, int i, int j) {
    int temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}

int main() {
    vector<int> vec = { 1, 2, 3, 6, 5, 4 };

    int firstIndex = -1, secondIndex = -1;

    for(int i = 0; i < vec.size() - 1; i++) {
        if (vec[i] > vec[i+1]) {
            if (firstIndex == -1) {
                firstIndex = i;
            }
            else {
                secondIndex = i;
            }
        }
    }

    swap(vec, firstIndex, secondIndex + 1);

    for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";

    cout << "\n";

}
