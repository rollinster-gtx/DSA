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

Node* deleteParticularNode(Node* Head, int x) {
    if (x == 1) {
        Node* temp = Head;
        Head = Head->next;
        delete temp;
        return Head;
    }

    x--;
    Node* curr = Head;
    Node* prev = NULL;

    while (x--) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    delete curr;

    return Head;
}

int main() {
    // Initial List: 20 -> 8 -> 7 -> 8
    Node* Head = new Node(20);
    Head->next = new Node(8);
    Head->next->next = new Node(7);
    Head->next->next->next = new Node(8);

    // 3rd node (7) delete karni hai (x = 3)
    Head = deleteParticularNode(Head, 3);

    // Print
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}