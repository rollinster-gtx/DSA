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

int main()
{
    Node *head = NULL;

    // insert at start
    int pos = 0; // Position jahan insert karna hai

    if (pos == 0)
    {
        // LinkedList exist na kare
        if (head == NULL)
        {
            head = new Node(5);
        }
        // Exist karti
        else
        {
            Node *temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else
    {
        Node *curr = head;
        // Go to the node, after which I have to insert
        while (--pos)
        {
            curr = curr->next;
        }

        // insert at end
        if (curr->next == NULL) // Last Node
        {
            Node *temp = new Node(5);
            temp->prev = curr;
            curr->next = temp;
        }
        // insert at middle
        else
        {
            Node *temp = new Node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }

    Node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}