#include <iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
struct Stack
{
    int arr[100];
    int top = -1;
    void push(int val)
    {
        if (top==99)
            return ;
        top++;
        arr[top]=val;
    }
    void pop()
    {
        if(isEmpty())
            return;
        top--;
    }
    int top_val()
    {
        if (isEmpty())
            return -1;
        return arr[top];
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};
bool Pair(char op, char cl)
{
    if (op == '(' || op == ')')
        return true;
    if (op == '{' || op == '}')
        return true;
    if (op == '[' || op == ']')
        return true;
    return false;
}
bool balanced(string exp)
{
    Stack open_bracket;
    for(int i=0; i<exp.length(); i++)
    {
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
            open_bracket.push(exp[i]);
        else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if(open_bracket.isEmpty())
                return false;
            else if(Pair(open_bracket.top_val(),exp[i]) == false)
                return false;
            open_bracket.pop();
        }
    }
    if(open_bracket.isEmpty())
        return true;
    else
        return false;
}
int main()
{
    cout << "1-push and pop stack \n 2- check balanced of bracket : ";
    int q;
    cin >> q ;
    if (q == 1)
    {
        Stack x;
        x.push(10);
        x.push(13);
        x.push(43);
        while(!x.isEmpty())
        {
            cout << x.top_val() << endl;
            x.pop();
        }
    }
    else if (q == 2)
    {
        string x;
        cin >> x;
        if(balanced(x))
            cout << "true";
        else
            cout << "false";
    }
    else if(q == 3){
        string inficEx = ("(3+2)*7/2*((7+3)*2)");
    }
    else
        cout << "error";
    return 0;
}
