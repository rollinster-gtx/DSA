#include <iostream>
using namespace std;

class MyCircularQueue {
    int *arr;
    int front, rear;
    int size;

public:
    MyCircularQueue(int n) {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool IsEmpty() {
        return front == -1;
    }

    bool IsFull() {
        return (rear + 1) % size == front;
    }

    void push(int x) {
        if (IsEmpty()) {
            front = rear = 0;
            arr[rear] = x;
        } 
        else if (IsFull()) {
            cout << "Queue Overflow\n";
            return;
        } 
        else {
            rear = (rear + 1) % size;
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
                front = (front + 1) % size;
            }
        }
    }

    int start() {
        if (IsEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        } 
        return arr[front];
    }
};

int main() {
    MyCircularQueue q(5);

    q.push(4);
    q.push(5);
    q.push(8);
    q.push(13);
    q.push(17);

    // Trying to push when full
    q.push(20); 

    // Popping elements
    q.pop();
    q.pop();

    // Pushing again to utilize circular indexing
    q.push(25);

    cout << "Front element: " << q.start() << endl;

    return 0;
}