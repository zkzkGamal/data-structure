#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Selc(int x[], int s)
{
    int minm;
    for(int i=0; i<s-1; i++)
    {
        minm = i;
        for(int j=i+1; j<s; j++)
        {
            if (x[j]< x[minm])
                minm = j;
        }
        swap(x[minm],x[i]);
    }
}
int main()
{
    int data[] = {11,2,44,65,10};
    int size =  sizeof(data) / sizeof(data[0]);
    Selc(data,size);
    for(int i=0; i<size; i++)
    {
        cout << data[i] << " " ;
    }
}
