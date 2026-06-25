Question 1 :Linked List Cycle
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        Node* slow = head;
        Node* fast = head;
        while( fast != NULL && fast-> != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true; 
        }
        return false;
    }
};

Question 2 : REverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp!=NULL){
             ListNode* front =temp->next;
             temp->next = prev;
             prev = temp;
             temp = front;
        }
        return prev;
    }

};
Question 3 : Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head; 
        ListNode* fast = head;
        while(fast !=NULL && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
