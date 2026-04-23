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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode * currNode = head;
        ListNode * preNode;
        while(currNode != NULL && currNode->next != NULL){
            ListNode * nextNode = currNode->next;
            // cout << "currNodeVal " << currNode->val << " nextvalue: " << nextNode->val << endl;
            if(head == currNode){
                head = nextNode;
       
            }else{
                preNode->next = nextNode;   
            }
                currNode->next = nextNode->next;
                nextNode->next = currNode;
                preNode = currNode;
                currNode = currNode->next;    
            // nextNode = currNode->next;
        }
        // if(currNode != NULL && currNode->next == NULL){
        //     ListNode * nextNode = currNode->next;
        //     currNode->next = NULL;
        //     nextNode->next = currNode;
        // }
        return head;
    }
};