#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList_Deletion
{
private:
    Node *head;
    Node *tail;
public:
    LinkedList_Deletion()
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

    void Delete_Kth_Node(int k)
    {
        if(k == 1)
        {
            head = head -> next;
        }
        else if
        else
        {
            int i = 1;
            Node *previous;
            Node *current;
            current = head;
            while(i != k)
            {
                previous = current;
                current = current -> next;
                i++;
            }
            previous -> next = current -> next;
        }
    }
    void display()
    {
        Node *temp;
        temp = head;
        while(temp != NULL)
        {
            cout<<temp -> data<<" ";
            temp = temp -> next;
        }
    }

};

int main()
{
    LinkedList_Deletion ll;
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        cout<<"\nEnter Length: ";
        cin>>len;
        for(int i = 1; i <= len; i++)
            ll.Insert_Node(i);
        ll.display();
        int k;
        cout<<"\nEnter the node you want to delete: ";
        cin>>k;
        ll.Delete_Kth_Node(k);
        ll.display();
    }
    return 0;
}

