#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};

Node *CreateDLL(int arr[], int index, int size, Node *back)
{
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr, index + 1, size, temp);
    return temp;
}

int main()
{
    Node *head = NULL;

    // Create Doubly Linked list
    int arr[] = {1, 2, 3, 4, 5};

    // Create it with Recursion
    head = CreateDLL(arr, 0, 5, NULL);

    int pos = 3; // Position to delete (1-based index)

    // Delete at start
    if (pos == 1)
    {
        if (head != NULL)
        {
            // If only one Node exist
            if (head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            // If more than 1 node exist
            else
            {
                Node *temp = head;
                head = head->next;
                delete temp;
                head->prev = NULL;
            }
        }
    }
    else
    {
        Node *curr = head;
        while (--pos)
        {
            curr = curr->next;
        }

        // delete at end
        if (curr->next == NULL)
        {
            curr->prev->next = NULL;
            delete curr;
        }
        // delete at middle
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
    }

    // Print remaining list
    Node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}