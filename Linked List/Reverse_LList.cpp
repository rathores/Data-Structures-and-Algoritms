/*
Reverse a Linked List can be performed with the usage of 3 pointers -
    1. current pointer
    2. previous pointer
    3. next pointer ( this pointer points to the upcoming node to be traversed for reversal )
*/


#include<iostream>
using namespace std;

struct Node
{
    Node *next;
    int data;
};

class Reverse_LList
{
private:
    Node *head;
    Node *tail;

public:
    Reverse_LList()
    {
        head = NULL;
        tail = NULL;
    }

    void Insert_Node(int val)
    {
        Node *temp = new Node;
        temp -> data = val;
        temp -> next = NULL;

        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }

        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }

    void Display_Node()
    {
        cout<<"\n";
        Node *temp;
        temp = head;
        while(temp != NULL)
        {
            cout<<temp -> data<<" ";
            temp = temp -> next;
        }
    }

    void Reverse_List()
    {
        Node *previous;
        Node *current;
        previous = NULL;
        current = head;
        Node *n;

        while(current != NULL)
        {
            n = current -> next;
            current -> next = previous;
            previous = current;
            current = n;
        }
        head = previous;
    }
};

int main()
{
    Reverse_LList rl;
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        cout<<"\nEnter Length: ";
        cin>>len;
        for(int i = 1; i <= len; i++)
            rl.Insert_Node(i);
        rl.Display_Node();
        rl.Reverse_List();
        cout<<"\nReversed Linked List:";
        rl.Display_Node();
    }
    return 0;
}
