#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int size;
    int top;

public:
    // Constructor
    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // Push operation
    void push(int value) {
        if (top == size - 1) {
            cout << "Stack overflow\n";
            return;
        } else {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " into the stack\n";
        }
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack underflow\n";
        } else {
            cout << "Popped " << arr[top] << " from the stack\n";
            top--;
        }
    }

    // Peek operation
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        } else {
            return arr[top];
        }
    }

    // IsEmpty operation
    bool isEmpty() {
        return top == -1;
    }

    // Optional helper for size (as used in dry run)
    int getSize() {
        return top + 1;
    }
};

int main() {
    Stack s(5);

    s.push(5);
    s.push(6);
    s.push(8);

    cout << s.peek() << endl;
    s.pop();

    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    cout << s.getSize() << endl;

    return 0;
}