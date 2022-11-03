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
void dis()
{
    cr=tail;
    while(cr!=NULL)
    {
        cout<<cr->data<<" ";
        cr=cr->left;
    }
}
int main()
{
    append(4);
    append(7);
    append(15);
    append(2);
    append(3);
  //  sort();
    dis();
}

