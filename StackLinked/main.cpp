#include <iostream>
#include<string>
using namespace std;
class stack
{
    struct node
    {
        string data ;
        node* next ;
    };
    node* top = NULL;
public:
     bool isEmpty()
    {
        if(top == NULL)
            return true;
        else
            return false;
    }
    void push(string val)
    {
        node* newnode = new node;
        newnode->data = val;
        newnode->next = NULL;
        if(isEmpty())
            newnode->next = NULL;
        else
            newnode->next = top;
        // save the new node
        top = newnode;
    }
    void pop()
    {
        if(isEmpty())
            return;
        node* temp = top;
        top = temp->next;
        delete temp;
    }
    void topval()
    {
        if(isEmpty())
            cout << "Stack is Empty";
        else
            cout << top->data;
    }
};
int main()
{
    stack aa;
    string a;
    for(int i =0 ; i<5;i++)
    {
        cin >> a;
    aa.push(a);
    }
    aa.topval();
}
