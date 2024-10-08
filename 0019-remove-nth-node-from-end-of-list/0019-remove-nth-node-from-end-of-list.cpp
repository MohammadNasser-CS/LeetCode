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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode tempList;
        tempList.next=head;
        ListNode* last=&tempList;
        for(int i=0;i<=n;i++){
            if(last!=NULL){
                last=last->next;
            }
        }
        ListNode* temp=&tempList;
        while(last!=NULL){
            last=last->next;
            temp=temp->next;
        }
        ListNode* deletedNode=temp->next;
        temp->next=temp->next->next;
        delete deletedNode;
        return tempList.next;
    }
};