#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next,*left;
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
        cr->left=NULL;
    }
    else
    {
        tail->next=cr;
        cr->left=tail;
        tail=cr;
        cr->next=NULL;
    }
}
void sort()
{
    node *i,*j;
    i=head;
    while(i!=NULL)
    {
        for(j=i; j!=NULL; j=j->left)
        {
            if(j->next->data < j->data)
            {
                t=j->data;
                j->data=j->next->data;
                j->next->data=t;
            }
        }
        i=i->next;
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
