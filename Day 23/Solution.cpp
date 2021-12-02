#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node {
public:
    int data;
    Node* left, * right;
    Node(int d) {
        data = d;
        left = right = NULL;
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

    void levelOrder(Node* root) {
        //Write your code here

        // 1- Check root if null pointer
        // 2- Push root and null to the queue
        // 3- Pop top of the queue
        // 4- Add left and right to the end of the queue

        // 1
        if (root == nullptr)
        {
            return;
        }

        // Creating ptr Queue
        queue<Node*> levelOrderQueue;

        // Store front element of the queue
        Node* currentELement;

        // 2
        levelOrderQueue.push(root);
        levelOrderQueue.push(NULL);

        // 3-4
        while (levelOrderQueue.size() > 1)
        {
            currentELement = levelOrderQueue.front();
            levelOrderQueue.pop();

            // Checking if current is null, push NULL
            if (currentELement == nullptr)
            {
                levelOrderQueue.push(NULL);
            }
            else
            {
                if (currentELement->left)
                {
                    levelOrderQueue.push(currentELement->left);
                }
                if (currentELement->right)
                {
                    levelOrderQueue.push(currentELement->right);
                }

                std::cout << currentELement->data << " ";
            }
        }

    }

};//End of Solution
int main() {
    Solution myTree;
    Node* root = NULL;
    int T, data;
    cin >> T;
    while (T-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.levelOrder(root);
    return 0;
}