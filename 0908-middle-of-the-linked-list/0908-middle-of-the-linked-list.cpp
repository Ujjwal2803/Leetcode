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
    ListNode* middleNode(ListNode* head) {
        ListNode* cur=head;
        int count=0;
        while(cur!=NULL){
            count++;
            cur=cur->next;
        }
        cur=head;
        int mid=count/2;
        for(int i=0;i<mid;i++){
            cur=cur->next;
        }
        return cur;
    }
};