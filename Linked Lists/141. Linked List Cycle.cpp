
// USE UNORDERED SET - LESS EFFICIENT SOLUTION

class Solution {
public:
    bool hasCycle(ListNode *head) {
    
        unordered_set<ListNode*> s;
        while(head){
            if(s.find(head) != s.end()){
                return true;
            }
            s.insert(head);
            head = head -> next;
        }
        return false;
    }
};



// USE CYCLE ALGORITHM - MORE EFFICIENT 

class Solution {
public:
    bool hasCycle(ListNode *head) {
    
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};

