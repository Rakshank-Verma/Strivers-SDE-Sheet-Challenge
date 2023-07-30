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
    // Approach -> slow and fast pointers
    // Time Complexity -> O(n)
    // Space Complexity -> O(1)
    ListNode *middleNode(ListNode *head)
    {

        if (head->next == NULL || head == NULL)
            return head;

        ListNode *slow = head, *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};