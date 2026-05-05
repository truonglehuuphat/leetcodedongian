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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return NULL;
        int elements = 1;
        ListNode* firstNode =  head;
        ListNode* lastNode = head;
        ListNode* preLastNode = NULL;
        while(lastNode->next){
            preLastNode = lastNode;
            lastNode = lastNode->next;
            elements++;
        }
        if(firstNode == lastNode) return head;
        // cout << elements << " " << (k % elements) << endl;
        if (k != 0 && k % elements == 0){
            k = 0;
        } else {
            k = k % elements;
        }
        for(int i = 0; i < k ; i++){
            firstNode = head;
            lastNode->next = firstNode;
            preLastNode->next = NULL;
            head = lastNode;
            while(lastNode->next){
                preLastNode = lastNode;
                lastNode = lastNode->next;
            }
        }
        return head;
    }
};