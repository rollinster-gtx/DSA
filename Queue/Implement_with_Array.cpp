#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int front, rear;
    int size;

public:
    Queue(int n) {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    bool IsEmpty() {
        return front == -1;
    }

    bool IsFull() {
        return rear == size - 1;
    }

    void push(int x) {
        if (IsEmpty()) {
            front = rear = 0;
            arr[0] = x;
        } 
        else if (IsFull()) {
            cout << "Queue Overflow\n";
            return;
        } 
        else {
            rear = rear + 1;
            arr[rear] = x;
        }
    }

    void pop() {
        if (IsEmpty()) {
            cout << "Queue Underflow\n";
            return;
        } 
        else {
            if (front == rear) {
                front = rear = -1;
            } 
            else {
                front = front + 1;
            }
        }
    }

    int start() {
        if (IsEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        } 
        else {
            return arr[front];
        }
    }
};

int main() {
    Queue q(5);

    q.push(5);
    q.push(15);
    q.push(51);

    q.pop();
    q.pop();

    int x = q.start();
    if (!q.IsEmpty()) {
        cout << x << " ";
    }

    return 0;
}