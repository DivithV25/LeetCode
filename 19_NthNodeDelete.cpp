#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
 struct ListNode
 {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 class Solution
 {
 public:
     ListNode *removeNthFromEnd(ListNode *head, int n)
     {
         ListNode *newHead = new ListNode(0);
         newHead->next = head;
         ListNode *first = newHead;
         ListNode *second = newHead;

         for (int i = 0; i <= n; i++)
         {
             first = first->next;
         }
         while (first != nullptr)
         {
             first = first->next;
             second = second->next;
         }
         ListNode *temp = second->next;
         second->next = second->next->next;
         delete temp;
         return newHead->next;
     }
 };