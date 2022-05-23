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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.size() == 0 ) return NULL;
    
        ListNode* head = lists[0];
        for(int i = 1;i<lists.size();i++){
            head = merge2Lists(head, lists[i]);
        }
        return head;
    }
    
    ListNode* merge2Lists(ListNode* L1, ListNode* L2){
        if(L1 == NULL) return L2;
        
        if(L2 == NULL) return L1;
        
        //Decide the head
        ListNode* head = L1;
        if(L1->val > L2->val){
            head = L2;
            L2 = L2->next;
        }
        else{
            L1 = L1->next;
        }
        
        ListNode* curr = head;
        while(L1 != NULL && L2 != NULL){
            if(L1->val < L2->val){
                curr->next = L1;
                L1 = L1->next;
            }
            else{
                curr->next = L2;
                L2 = L2->next;
            }
            curr = curr->next;
        }
        
        //If one of each is empty
        if(!L1) curr->next = L2;
        else curr->next = L1;
        
        return head;
    }
};