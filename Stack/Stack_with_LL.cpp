#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
    Node *top;
    int size;

public:
    // Constructor
    Stack() {
        top = NULL;
        size = 0;
    }

    // Push operation
    void push(int value) {
        Node *temp = new Node(value);
        if (temp == NULL) {
            cout << "Stack overflow\n";
            return;
        }
        temp->next = top;
        top = temp;
        size++;
    }

    // Pop operation
    void pop() {
        if (top == NULL) {
            cout << "Stack underflow\n";
            return;
        } else {
            Node *temp = top;
            cout << "Popped " << top->data << " from the stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }

    // Peek operation
    int peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        } else {
            return top->data;
        }
    }

    // IsEmpty operation
    bool isEmpty() {
        return top == NULL;
    }

    // IsSize / GetSize operation
    int isSize() {
        return size;
    }
};

int main() {
    Stack s;

    s.push(6);
    s.push(16);
    s.push(62);
    s.push(86);

    s.pop();

    cout << s.isSize() << endl;
    cout << s.isEmpty() << endl;
    cout << s.peek() << endl;

    return 0;
}