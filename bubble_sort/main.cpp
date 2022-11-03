#include <iostream>
#include<algorithm>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble(int x[], int s) //1
{
    for(int i=0; i<s-1; i++)
    {
        for(int j=0; j<s-i-1; j++)
        {
            if (x[j]>x[j+1])
            {
                swap(x[j],x[j+1]);
            }
        }
    }
}
void iser(int a[],int b) //2
{
    for(int i=1; i<b; i++)
    {
        int current = a[i];
        int j = i-1;
        while(current < a[j] && j>=0)
        {
            a[j+1] =a[j];
            --j;
        }
        a[j+1]= current;
    }
}
void selec(int s[],int sa)
{
    int minm;
    for(int i=0; i<sa-1; i++)
    {
        minm = i;
        for(int j=i+1; j<sa; j++)
        {
            if(s[j]<s[minm])
            {
                minm = j;
            }}
        swap(s[minm],s[i]);
    }
}
int main()
{
    cout << "enter   1-for bubble sort \n\t2-for insertion sort \n\t3-for selection sort\n ";
    cout << "enter your choice : ";
    int x;
    cin >> x;
    if(x==1)
    {
        int data[]= {10,2,66,22,5};
        int size = sizeof(data)/sizeof(data[0]);
        bubble(data,size);
        cout << "your array after bubble sort " << endl;
        for(int i=0; i<size; i++)
        {
            cout << data[i] << " " ;
        }
    }
    else if(x==2)
    {
        int data[]= {10,2,66,22,5};
        int size = sizeof(data)/sizeof(data[0]);
        iser(data,size);
        cout << "your array after insertion sort " << endl;
        for(int i=0; i<size; i++)
        {
            cout << data[i] << " " ;
        }
    }
    else if(x==3)
    {
        int data[]= {10,2,66,22,5};
        int size = sizeof(data)/sizeof(data[0]);
        selec(data,size);
        cout << "your array after selection sort " << endl;
        for(int i=0; i<size; i++)
        {
            cout << data[i] << " " ;
        }
    }
    else
    {
        while(x!=1 || x!=2 || x!= 3)
        {
            cout << "Invalid error. \n enter again : ";
            cin >> x;
        }
    }
}
