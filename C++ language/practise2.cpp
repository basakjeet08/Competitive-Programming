#include <iostream>
using namespace std ;

struct ListNode {
    int val;
    ListNode *next;
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode* ptr1 = l1 ;
        struct ListNode* ptr2 = l2 ;
        struct ListNode* head3 = new ListNode ;
        struct ListNode* ptr3 = head3 ;
        int carry = 0 ;
        while(ptr1 != NULL && ptr2 != NULL){
            int add = ptr1->val + ptr2->val + carry;
            struct ListNode* newNode = new ListNode ;
            newNode->next = NULL ;
            if(add >= 10){
                newNode->val = add-10;
                carry = 1 ;
            }
            if(head3 == NULL)
                head3 = ptr3 = newNode;
            else{
                ptr3->next = newNode;
                ptr3 = newNode;
            }
        }
        return head3 ;
    }
};