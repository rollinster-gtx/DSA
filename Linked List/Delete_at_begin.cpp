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

int main() {
    // Initial List: 20 -> 8 -> 7 -> 30
    Node* Head = new Node(20);
    Head->next = new Node(8);
    Head->next->next = new Node(7);
    Head->next->next->next = new Node(30);

    // Delete at Start
    if (Head != NULL) {
        Node* temp = Head;
        Head = Head->next;
        delete temp;
    }

    // Print
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}