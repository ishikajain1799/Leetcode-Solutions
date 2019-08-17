// USE TAIL RECURSION METHOD 

class Solution {
public:
    
    bool isPalindromeUtil(ListNode* &head, ListNode *tail){
        
        if(tail == NULL){
            return true;
        }
        
        bool ans = isPalindromeUtil(head, tail->next);
        
        if(!ans){
            return ans;
        }
        
        if(head -> val == tail -> val){
            head = head -> next;
            return true;
        }
        
        return false;
    }
    bool isPalindrome(ListNode* head) {
        return isPalindromeUtil(head, head);
    }
};
