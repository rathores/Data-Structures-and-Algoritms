/*

To find the middle element of a Linked List in most optimal manner, we use two pointers.
 - Fast Pointer that moves by 2
 - Slow Pointer that moves by 1

 In this way, When the fast pointer reaches the end of the List, the Slow pointer is at the middle of that list.

*/

#include<iostream>
using namespace std;

struct Node{
int data;
Node *next;
};

class LinkedList_MiddleElement
{
private:
    Node *head;
    Node *tail;
public:
    LinkedList_MiddleElement()
    {
        head = NULL;
        tail = NULL;
    }
    void Insert_Node(int data)
    {
        Node *temp = new Node;
        temp -> data = data;
        temp ->next = NULL;
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

    void Middle_Element()
    {
        //Here we use two pointers, fast and slow
        Node *fast_ptr;
        Node *slow_ptr;
        fast_ptr = head;
        slow_ptr = head;
        while(fast_ptr != NULL)
        {
            if(fast_ptr -> next == NULL)
            {
                break;
            }
            else
            {
                fast_ptr = fast_ptr -> next ->next;
                slow_ptr = slow_ptr -> next;
            }
        }
        cout<<"\nMiddle Element of the Linked List is: "<<slow_ptr -> data<<"\n";
    }

    void Display_List()
    {
        Node *ptr;
        ptr = head;
        while(ptr != NULL)
        {
            cout<<ptr -> data<<" ";
            ptr = ptr -> next;
        }
    }
};

int main()
{
    LinkedList_MiddleElement ll;
    int len;
    int data;
    cout<<"Enter the Length of the List: ";
    cin>>len;
    for(int i = 0; i < len; i++)
    {
        cin>>data;
        ll.Insert_Node(data);
    }
    ll.Display_List();
    ll.Middle_Element();
    return 0;
}
