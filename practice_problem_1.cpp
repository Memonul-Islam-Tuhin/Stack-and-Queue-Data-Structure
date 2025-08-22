#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
public:
    Node *top = NULL;

    void push(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    int pop()
    {
        if (top != NULL)
        {
            int val = top->data;
            Node *temp = top;
            top = top->next;
            delete temp;
            return val;
        }
        return -1;
    }

    int isEmpty()
    {
        return top == NULL;
    }

    int size()
    {
        int count = 0;
        Node *current = top;
        while (current != NULL)
        {
            count++;
            current = current->next;
        }
        return count;
    }
};

int main()
{
    int n, m;
    Stack s1, s2;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s1.push(val);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        s2.push(val);
    }

    if (s1.size() != s2.size())
    {
        cout << "NO\n";
    }
    else
    {
        int same = 1;
        while (!s1.isEmpty())
        {
            int val1 = s1.pop();
            int val2 = s2.pop();
            if (val1 != val2)
            {
                same = 0;
                break;
            }
        }
        if (same == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}