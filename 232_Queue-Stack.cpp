#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
     
    }

    void push(int x) {
        int a;
        while (!(s2.empty())) {
            a = s2.top();
            s2.pop();
            s1.push(a);
        }
        s1.push(x);
    }

    int pop() {
        int b;
        int c;
        while (!(s1.empty())) {
            b = s1.top();
            s1.pop();
            s2.push(b);
        }
        c = s2.top();
        s2.pop();
        return c;
    }

    int peek() {
        int b;
        while (!(s1.empty())) {
            b = s1.top();
            s1.pop();
            s2.push(b);
        }
        return s2.top();
    }

    bool empty() {
        if (s1.empty() && s2.empty())
            return true;
        else
            return false;
    }
};
int main(){


//   Your MyQueue object will be instantiated and called as such:
 MyQueue* obj = new MyQueue();
  obj->push(1);
  obj->push(2);
  int param_2 = obj->pop();
  int param_3 = obj->peek();
  bool param_4 = obj->empty();
 cout<<param_2<<" "<<param_3<<" "<<param_4<<" ";
}