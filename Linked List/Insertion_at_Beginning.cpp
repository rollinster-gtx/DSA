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
    int arr[] = {2, 4, 6, 8, 10};

    // Insertion at Beginning
    for (int i = 0; i < 5; i++) {
        if (Head == NULL) {
            Head = new Node(arr[i]);
        } else {
            Node* temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
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