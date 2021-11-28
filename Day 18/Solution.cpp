#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {

    //Write your code here
    stack<char> Stack;
    queue<char> Queue;

public:
    void pushCharacter(char ch)
    {
        //Pushes a character onto a stack
        Stack.push(ch);
    }

    void enqueueCharacter(char ch)
    {
        //Enqueue a character in the queue instance variable
        Queue.push(ch);
    }

    char popCharacter()
    {
        //Pop and returns the chracter at the top of the stack instance variable

        char topChar = Stack.top(); // Assign topChar to the top of the Stack
        Stack.pop();    // Pop of the Stack (remove)
        return topChar; // return the character
    }

    char dequeueCharacter()
    {
        //Dequeue and return the first character in the queue instance varialble

        char frontChar = Queue.front(); // Assign frontChar to the front of the Queue
        Queue.pop();    // Pop of the Queue (remove)
        return frontChar;   // return the character
    }

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);

    // create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    }
    else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}