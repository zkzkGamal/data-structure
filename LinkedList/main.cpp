#include <iostream>
#include<algorithm>
#include<stack>
#include<cstdlib>
using namespace std;
class LinkedList
{
    struct Node
    {
        int data;
        Node* next;
    };
    Node* head =  NULL;
public:
    void append(int val)
    {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        // spacial cases
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insert_at_pos(int val,int pos)
    {
        Node* newnode = new Node;
        newnode->data = val;
        newnode->next = NULL;
        // check the posation is first
        if (pos == 0)
        {
            newnode->next = head;
            head = newnode;
            return;
        }
        Node* temp = head;
        for(int i=0; i<pos-1 && temp->next != NULL ; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next =  newnode;
    }
    void remova(int val)
    {
        if (head == NULL)
            return;
        //make the data of delete func that have prev pointer ant temp
        Node* temp, *prev;
        prev = temp = head;
        if(temp->data == val)
        {
            head = temp->next;
            delete temp;
            return;
        }
        while(temp != NULL && temp->data != val )
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp == NULL)
            return;
        else
        {
            prev->next = temp->next;
            delete temp;
        }
    }
    void remove_at_pos(int pos)
    {
        if(head == NULL)
        {
            return;
        }
        if(pos == 0)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            Node* temp = head;
            for(int i=0; i<pos-1 && temp->next != NULL ; i++)
            {
                temp = temp->next;
            }
            if(temp->next == NULL)
            {
                return;
            }
            Node* temp2 = temp->next;
            temp->next = temp->next->next;
            delete temp2;
        }
    }
    void display()
    {
        Node* temp = head;
        if( head == NULL)
        {
            cout << "list is empty";
            return;
        }
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void Reverse(){
        if(head == NULL)
            return;
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};
int main()
{
    LinkedList aa;
    aa.append(10);
    aa.append(11);
    aa.append(13);
    aa.append(34);
    aa.display();
    aa.Reverse();
    aa.display();
}
