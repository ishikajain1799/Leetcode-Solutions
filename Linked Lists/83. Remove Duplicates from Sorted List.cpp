
// ITERATIVE VERSION - MORE EFFICIENT 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* temp = head;
        while(temp && temp->next){
            if(temp->val == temp->next->val){
                ListNode* del = temp->next;
                temp->next = del->next;
                delete del;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};


// RECURSIVE VERSION - LESS EFFICIENT 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head || !(head -> next)){
            return head;
        }
        
        if(head -> val == head -> next -> val){
            ListNode * del = head -> next;
            head -> next = del -> next;
            delete del;
            return deleteDuplicates(head);
        }
        else{
            head -> next = deleteDuplicates(head->next);
            return head;
        }
    }
};
