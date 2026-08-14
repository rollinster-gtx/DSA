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

// Recursive Function to Create/Insert Linked List at End
Node* CreateLinkedList(int arr[], int index, int size) {
    // Base Case
    if (index == size) {
        return NULL;
    }

    Node* temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

int main() {
    Node* Head = NULL;
    int arr[] = {2, 4, 6, 8, 10};

    // Creating linked list using recursion
    Head = CreateLinkedList(arr, 0, 5);

    // Printing the Linked List
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}