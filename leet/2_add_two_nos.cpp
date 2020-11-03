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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode;
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        ListNode* ptr3 = l3;
        ListNode* pre3 = l3;


        int rem =0;
        while (ptr1!=NULL || ptr2!=NULL)
        {
            int sum = rem;
            if (ptr1!=NULL){
                sum = sum + ptr1-> val;
                
            }
            if (ptr2!=NULL){
                sum = sum + ptr2-> val;
                
            }
            if (sum>9){
                rem = sum/10;
                sum = sum%10;
            }
            else {
                rem = 0;
            }
            
            cout <<sum<<"   "<<rem<<endl;
            ptr3->val = sum;
            ListNode* temp = new ListNode;
            ptr3->next=temp;
            pre3= ptr3;
            ptr3= temp;
            if (ptr1!=NULL)
                ptr1=ptr1->next;
            if (ptr2!=NULL)
                ptr2=ptr2->next;
        }
        if (rem == 0){
            pre3->next = NULL;
        }
        else{
            pre3->next->val = rem;
        }
        return l3;
        
        
    }
};