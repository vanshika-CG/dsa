/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first = -1, last = -1;
        ListNode* curr = head->next;
        ListNode* prev = head;

        int pos = 1;
        int mini = INT_MAX;

        while (curr && curr->next) {

            int a = prev->val;
            int b = curr->val;
            int c = curr->next->val;

            if ((a < b && c < b) || (a > b && c > b)) {
                if (first == -1)
                    first = pos;
                else {
                    mini = min(mini, pos - last);
                }
                last = pos;
            }

            prev = curr;
            curr = curr->next;
            pos++;
        }

        if (first == last)
            return {-1, -1};

        return {mini, last - first};
    }
};