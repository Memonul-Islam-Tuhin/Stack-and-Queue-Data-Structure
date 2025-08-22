#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    queue<int> originalQueue;
    stack<int> tempStack;
    for (int i = 0; i < N; ++i)
    {
        int value;
        cin >> value;
        originalQueue.push(value);
    }

    while (!originalQueue.empty())
    {
        tempStack.push(originalQueue.front());
        originalQueue.pop();
    }

    queue<int> reversedQueue;
    while (!tempStack.empty())
    {
        reversedQueue.push(tempStack.top());
        tempStack.pop();
    }

    while (!reversedQueue.empty())
    {
        cout << reversedQueue.front() << " ";
        reversedQueue.pop();
    }

    return 0;
}