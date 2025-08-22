#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    list<int> myList;
    void push(int value)
    {
        myList.push_back(value);
    }
    void pop()
    {
        myList.pop_front();
    }
    int front()
    {
        return myList.front();
    }
    int back()
    {
        return myList.back();
    }
    bool empty()
    {
        return myList.empty();
    }
};

int main()
{

    Queue q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}