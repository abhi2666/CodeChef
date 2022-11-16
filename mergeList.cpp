// Program to merge two linked list 

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        // check if any of this list is NULL
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        //now check which one is smaller
        if(list1->value > list2->value)
        {
            ListNode* temp = list1;
            list1 = list2;
            list2 = temp;
        }
        
        // main logic
        ListNode* res = list1;
        while(list1 != NULL && list2 != NULL)
        {
            //check for elements
            temp = NULL;
            while(list1 != NULL && list1->value <= list2->value)
            {
                temp = list1;
                list1 = list1->next;
            }
            //now l1->value > l2->value so exchange them
            temp->next = list2;
            //swap list and list2
            ListNode* t = list1;
            list1 = list2;
            list2 = t;
        }
        return res;
    }
};