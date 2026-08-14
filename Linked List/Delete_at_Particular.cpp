#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Recursive Function
Node* deleteNode(Node* curr, int x) {
    if (x == 1) {
        Node* temp = curr->next;
        delete curr;
        return temp;
    }

    curr->next = deleteNode(curr->next, x - 1);
    return curr;
}

int main() {
    // Initial List: 20 -> 8 -> 7 -> 8
    Node* Head = new Node(20);
    Head->next = new Node(8);
    Head->next->next = new Node(7);
    Head->next->next->next = new Node(8);

    // 3rd node delete karni hai (x = 3)
    Head = deleteNode(Head, 3);

    // Print
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}