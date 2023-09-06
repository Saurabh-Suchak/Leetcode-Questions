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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k, nullptr);

        
        // int len = 0;
        int n=0;
        ListNode* temp=head;
        
        while(temp){
            n++;
            temp=temp->next;
        }

        int parts=n/k;
        int r=n%k;

       
       temp=head;
        ListNode *prev = NULL;

        
        for (int i = 0; temp && i < k; i++, r--) {
            
            ans[i] = temp;
            
            for (int j = 0; j < parts + (r > 0); j++) {
                prev = temp;
                temp = temp->next;
            }
         
            prev->next = NULL;
        }
        return ans;
    }
};