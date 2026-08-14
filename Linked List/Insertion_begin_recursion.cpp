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

// Recursive Function for Insertion at Beginning
Node* CreateLinkedList(int arr[], int index, int size, Node* prev) {
    // Base Case
    if (index == size) {
        return prev;
    }

    Node* temp = new Node(arr[index]);
    temp->next = prev;
    return CreateLinkedList(arr, index + 1, size, temp);
}

int main() {
    Node* Head = NULL;
    int arr[] = {2, 4, 6, 8, 10};

    // Creating linked list by inserting at beginning recursively
    Head = CreateLinkedList(arr, 0, 5, Head);

    // Printing the Linked List
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}