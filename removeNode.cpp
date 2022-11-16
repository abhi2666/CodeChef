class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* l1 = head;
        ListNode* l2 = head;
        Listnode* l3 = head;
        int i = 0; 
        while(i < n)
        {
            l1 = l1->next;
            i++;
        }
        ListNode* res = head;
        while(l1->next != NULL)
        {
            l1 = l1->next;
            l2 = l2->next;
            
        }
        //remove the node
        l3->next = l3->next->next;
        return res;
    }
};