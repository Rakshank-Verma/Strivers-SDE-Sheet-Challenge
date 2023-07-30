#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    // Approach -> 3 pointers
    // Time Complexity -> O(n)
    // Space Complexity -> O(1)
    ListNode *reverseList(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *left, *middle, *right;
        left = head;
        middle = head->next;
        right = head->next->next;

        left->next = NULL;

        while (right != NULL)
        {
            middle->next = left;
            left = middle;
            middle = right;
            right = right->next;
        }

        middle->next = left;

        return middle;
    }
};