#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
};
node*head=NULL;
node*tail;
node*cr;
int t;
void append(int d)
{
    cr=new node;
    cr->data=d;
    if(head==NULL)
    {
        head=cr;
        tail=cr;
    }
    else
    {
        tail->next=cr;
        tail=cr;
        cr->next=NULL;
    }
}
void sort()
{
    node *s;
    cr=head;
    while(cr!=NULL)
    {
        s=head;
        while(s!=NULL)
        {
            if(s->data > cr->data)
            {
                t=s->data;
                s->data  =cr->data;
                cr->data=t;
            }
            s=s->next;
        }
        cr=cr->next;
    }
}
void dis()
{
    cr=head;
    while(cr!=NULL)
    {
        cout<<cr->data<<" ";
        cr=cr->next;
    }
}
int main()
{
    append(4);
    append(7);
    append(15);
    append(2);
    append(3);
    sort();
    dis();
}
