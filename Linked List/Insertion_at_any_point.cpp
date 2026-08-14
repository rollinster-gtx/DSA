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

// Helper function to create initial linked list
Node* CreateLinkedList(int arr[], int index, int size) {
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

    // Linked list create kar rahe hain
    Head = CreateLinkedList(arr, 0, 5);

    // Insertion at particular position (x = 3, value = 30)
    int x = 3;
    int value = 30;

    Node* temp = Head;
    x--;
    while (x--) {
        temp = temp->next;
    }

    Node* temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Printing the Linked List
    temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}