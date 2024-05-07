#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    queue<int> q1, q2;
    MyStack() {}

    void push(int x) { q1.push(x); }

    int pop()
    {
        while (q1.size() > 1)
        {
            q2.push((q1.front()));
            q1.pop();
        }

        int a = q1.front();
        q1.pop();
        swap(q1, q2);
        return a;
    }

    int top() { return q1.back(); }

    bool empty()
    {
        if ((q1.empty()) && (q2.empty()))
            return true;

        return false;
    }
};

int main()
{

    //   Your MyStack object will be instantiated and called as such:
    MyStack *obj = new MyStack();
    obj->push(2);
    int param_5 = obj->top();
    obj->push(3);

    int param_1 = obj->top();
    int param_2 = obj->pop();
    int param_3 = obj->pop();
    bool param_4 = obj->empty();
    cout << param_5 << " " << param_1 << " " << param_2 <<" "<<param_3 << " " << param_4;
}