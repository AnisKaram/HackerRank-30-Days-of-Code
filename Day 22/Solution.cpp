#include <iostream>
#include <cstddef>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};
class Solution {
public:
    Node* insert(Node* root, int data) {
        if (root == NULL) {
            return new Node(data);
        }
        else {
            Node* cur;
            if (data <= root->data) {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    int getHeight(Node* root) {
        //Write your code here

        // Checking if the BST is empty, we return -1
        if (root == nullptr)
            return -1;

        // Getting the depth of left and right subtree using recusrion
        int left = getHeight(root->left);
        int right = getHeight(root->right);

        // Returning the bigger + 1
        // We can also use if statement
        return max(left, right) + 1;

    }

}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while (t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}



