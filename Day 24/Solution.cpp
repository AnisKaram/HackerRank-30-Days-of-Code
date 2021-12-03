#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};
class Solution {
public:

    Node* removeDuplicates(Node* head)
    {
        //Write your code here

        // Storing current head
        Node* currentPtr = head;
        // Initializing next pointer, to store temp next
        Node* nextPtr;

        // LinkedList may be empty
        if (currentPtr == nullptr)
        {
            currentPtr->next = nullptr;
            return currentPtr;
        }

        while (currentPtr->next != nullptr)
        {
            if (currentPtr->data == currentPtr->next->data)
            {
                // Storing next of the next pointer
                nextPtr = currentPtr->next->next;
                // deleting the duplicate pointer
                delete currentPtr->next;
                // Setting next of the current ptr to the nextPtr (above)
                currentPtr->next = nextPtr;
            }
            else
            {
                // Setting the currentPtr to the next one (to continue searching)
                currentPtr = currentPtr->next;
            }
        }

        return head;
    }

    Node* insert(Node* head, int data)
    {
        Node* p = new Node(data);
        if (head == NULL) {
            head = p;

        }
        else if (head->next == NULL) {
            head->next = p;

        }
        else {
            Node* start = head;
            while (start->next != NULL) {
                start = start->next;
            }
            start->next = p;

        }
        return head;


    }
    void display(Node* head)
    {
        Node* start = head;
        while (start)
        {
            cout << start->data << " ";
            start = start->next;
        }
    }
};

int main()
{
    Node* head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0) {
        cin >> data;
        head = mylist.insert(head, data);
    }
    head = mylist.removeDuplicates(head);

    mylist.display(head);

}