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
        ListNode* curr=head;
        int count=0;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        int k=count-n;
        if(k==0)return head->next;
        curr=head;
        for(int i=0;i<k-1;i++){
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
    }
};