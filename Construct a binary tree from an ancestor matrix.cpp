#include <iostream>
#include <map>
using namespace std;
 
#define N 5
 
// Data structure to store a binary tree node
struct Node
{
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
 
// Utility function to print binary tree nodes in an inorder fashion
void inorder(Node* node)
{
    if (node != nullptr)
    {
        inorder(node->left);
        cout << node->key << " ";
        inorder(node->right);
    }
}
 
// Function to construct a binary tree from the specified ancestor matrix
Node* constructTree(bool mat[][N])
{
    // create an empty multimap
    multimap<int, int> multimap;
 
    // Use sum as key and row numbers as values in the multimap
    for (int i = 0; i < N; i++)
    {
        // find the sum of the current row
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += (int)mat[i][j];
        }
 
        // insert the sum and row number into the multimap
        multimap.insert({ sum, i });
    }
 
    // `node[i]` will store the node for `i` in the constructed tree
    Node* node[N];
    int row;
 
    // value of `parent[i]` is true if a parent is set for the i'th node
    bool parent[N];
    for (int i = 0; i < N; i++) {
        parent[i] = false;
    }
 
    // Traverse the multimap in sorted order (default behavior)
    for (auto it: multimap)
    {
        row = it.second;
 
        // create a new node
        node[row] = new Node(row);
 
        // if a leaf node is reached, do nothing
        if (it.first == 0) {
            continue;
        }
 
        // traverse row
        for (int i = 0; i < N; i++)
        {
            // do if a parent is not set and ancestor exits
            if (parent[i] == false && mat[row][i])
            {
                // check for the unoccupied node
                if (node[row]->left == nullptr) {
                    node[row]->left = node[i];
                }
                else {
                    node[row]->right = node[i];
                }
 
                // set parent for i'th node
                parent[i] = true;
            }
        }
    }
 
    // last processed node is the root
    return node[row];
}
 
int main()
{
    bool mat[N][N] =
    {
        { 0, 0, 0, 0, 0 },
        { 1, 0, 0, 0, 0 },
        { 0, 0, 0, 1, 0 },
        { 0, 0, 0, 0, 0 },
        { 1, 1, 1, 1, 0 }
    };
 
    Node* root = constructTree(mat);
    inorder(root);
 
    return 0;
}


