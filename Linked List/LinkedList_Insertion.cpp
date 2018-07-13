/*
Insertion in a Linked List can be performed in 3 ways -
    1. Insertion at the Beginning i.e HEAD
    2. Insertion at the End i.e TAIL
    3. Insertion at any kth Position
*/

#include<iostream>
using namespace std;

struct Node
{
int data;
struct Node *next;
};

class LinkedList_Insertion{
private:
    Node *head;
    Node *tail;
public:
    int len;
    LinkedList_Insertion()
    {
        head = NULL;
        tail = NULL;
    }
    void Insert_Node_At_End(int val)
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

    void Insert_Node_At_Beg(int val)
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
            temp -> next = head;
            head = temp;
        }
    }
    void Insert_Node_At_kth_Position(int k,int val)
    {
        Node *temp = new Node;
        temp -> data = val*100;
        temp -> next = NULL;
        if(head == NULL && k > 1 ||(k > 12))
            cout<<"\nInsertion not Possible\n";
        else if(k == 1)
        {
              Insert_Node_At_Beg(val*100);
        }
        else
        {
            Node *ptr;
            ptr = head;
            Node *p = new Node;
            int i = 1;
            while(i != k )
            {
                p = ptr;
                ptr = ptr -> next;
                i++;
            }
            temp -> next = p -> next;
            p -> next = temp;
        }
    }

    void Display_Nodes()
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
    LinkedList_Insertion ll;
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        cout<<"\nEnter Length: ";
        cin>>len;
        for(int i = 1; i <= len; i++)
            ll.Insert_Node_At_End(i);
        ll.Display_Nodes();
        ll.Insert_Node_At_Beg(len+1);
        cout<<"\n";
        ll.Display_Nodes();
        cout<<"\n";
        int k;
        cout<<"Enter the position where data is to be inserted: ";
        cin>>k;
        ll.Insert_Node_At_kth_Position(k,len+1);
        ll.Display_Nodes();
    }
    return 0;
}


