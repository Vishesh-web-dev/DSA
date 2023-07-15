// Definition for a Node.
/*
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        //O(n) space
        if (head == nullptr) {
            return nullptr;
        }
        
        Node* copyHead = new Node(head->val);
        Node* currentOriginal = head->next;
        Node* currentCopy = copyHead;
        
        unordered_map<Node*, Node*> mapping;
        mapping[head] = copyHead;
        
        while (currentOriginal != nullptr) {
            Node* newNode = new Node(currentOriginal->val);
            currentCopy->next = newNode;
            currentCopy = newNode;
            mapping[currentOriginal] = currentCopy;
            currentOriginal = currentOriginal->next;
        }
        
        currentOriginal = head;
        currentCopy = copyHead;
        
        while (currentCopy != nullptr) {
            currentCopy->random = mapping[currentOriginal->random];
            currentOriginal = currentOriginal->next;
            currentCopy = currentCopy->next;
        }
        
        return copyHead;
    }
};
