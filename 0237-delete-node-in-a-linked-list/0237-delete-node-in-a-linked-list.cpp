/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* tempNode = node->next; 
        node->val = tempNode->val;       
        node->next = tempNode->next;   
        delete tempNode;
    }
};