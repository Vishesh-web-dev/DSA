// O(1) space
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) {
            return nullptr;
        }
        
        // Clone each node and insert it after the original node
        Node* curr = head;
        while (curr != nullptr) {
            Node* newNode = new Node(curr->val);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }
        
        // Update the random pointers of the cloned nodes
        curr = head;
        while (curr != nullptr) {
            if (curr->random != nullptr) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        
        // Separate the original and cloned lists
        curr = head;
        Node* clonedHead = head->next;
        Node* clonedCurr = clonedHead;
        while (curr != nullptr) {
            curr->next = curr->next->next;
            if (clonedCurr->next != nullptr) {
                clonedCurr->next = clonedCurr->next->next;
            }
            curr = curr->next;
            clonedCurr = clonedCurr->next;
        }
        
        return clonedHead;
    }
};
