#include <iostream>
using namespace std;

// Node Class Definition
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    Node* Head = NULL;
    Node* Tail = NULL;
    int arr[] = {2, 4, 6, 8, 10};

    // Insertion at End
    for (int i = 0; i < 5; i++) {
        if (Head == NULL) {
            Head = new Node(arr[i]);
            Tail = Head;
        } else {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }

    // Printing the Linked List
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}