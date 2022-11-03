#include <iostream>
using namespace std;
void insr(int x[], int s)
{
    for(int i=1;i<s;i++){
        int cur = x[i];
        int j = i-1;
        while(cur<x[j] && j>=0){
            x[j+1]= x[j];
            --j;
        }
        x[j+1]= cur;
    }
}
int main()
{
    int data[]= {1,43,22,4,39,98};
    int size = sizeof(data)/sizeof(data[0]);
    insr(data,size);
    for(int i=0;i<size;i++){
        cout << data[i] << " ";
    }
}
