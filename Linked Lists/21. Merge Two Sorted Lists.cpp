class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if(!l1){
            return l2;
        }
        if(!l2){
            return l1;
        }
        ListNode * res = NULL;
        ListNode * temp = NULL;
        while(l1 && l2){
            if(l1 -> val <= l2 -> val){
                if(!res){
                    res = l1;
                    temp = res;
                }
                else{
                    temp -> next = l1;
                    temp = temp -> next;
                }
                l1 = l1->next;
            }
            else{
                if(!res){
                    res = l2;
                    temp = res;
                }
                else{
                    temp -> next = l2;
                    temp = temp -> next;
                }
                l2 = l2->next;
            }
        }

        while(l1){
            if(!res){
                res = l1;
                temp = res;
            }
            else{
                temp -> next = l1;
                temp = temp -> next;
            }
            l1 = l1->next;
        }

        while(l2){
            if(!res){
                res = l2;
                temp = res;
            }
            else{
                temp -> next = l2;
                temp = temp -> next;
            }
            l2 = l2->next;
        }

        if(temp){
            temp -> next = NULL;
        }

        return res;
    }
};
