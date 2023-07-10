
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        //appraoch 1 sort it
        //apppraoch 2 counting sort
        //approach 3 seggeregation ==> three nodes create remove from LL and put it there6
        //we would be needing head and tail of them as well
        Node* zeroh = nullptr;
        Node* zerot = nullptr;
        Node* oneh = nullptr;
        Node* onet = nullptr;
        Node* twoh = nullptr;
        Node* twot = nullptr;
        Node* temp = head;
        Node* forward;
        while(temp!= nullptr){
            forward = temp->next;
            temp->next = NULL;
            if(temp->data == 0){
                if(zeroh == nullptr){
                    zeroh = temp;
                    zerot = temp;
                }else{
                    zerot->next = temp;
                    zerot = temp;
                }
            }else if(temp->data == 1){
                if(oneh == nullptr){
                    oneh = temp;
                    onet = temp;
                }else{
                    onet->next = temp;
                    onet = temp;
                }
            }else{
                if(twoh == nullptr){
                    twoh = temp;
                    twot = temp;
                }else{
                    twot->next = temp;
                    twot = temp;
                }
            }
            temp = forward;
        }
        //zero is not present
        if(zeroh == nullptr && oneh == nullptr){
            return twoh;
        }else if(zeroh == nullptr && twoh == nullptr){
            return oneh;
        }else if(oneh == nullptr && twoh == nullptr){
            return zeroh;
        }else if(zeroh == nullptr){
            onet->next = twoh;
            return oneh;
        }else if(oneh == nullptr){
            zerot->next = twoh;
            return zeroh;
        }else if(twoh == nullptr){
            zerot->next = oneh;
            return zeroh;
        }else{
            zerot->next = oneh;
            onet->next = twoh;
            return zeroh;
        }
    }
};

//reducing number of if statments using dummy nodes imp method


class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        // O(1) space***
        //approach 3 seggeregation ==> three nodes create remove from LL and put it there
        Node* zeroh = new Node(-1); //dummy node
        Node* zerot = zeroh;
        Node* oneh = new Node(-1);
        Node* onet = oneh;
        Node* twoh = new Node(-1);
        Node* twot = twoh;
        Node* temp = head;
        while(temp!= nullptr){
            if(temp->data == 0){
                zerot->next = temp; //we are placing in front of dummy array
                zerot = temp;
            }else if(temp->data == 1){
                onet->next = temp;
                onet = temp;
            }else{
                twot->next = temp;
                twot = temp;
            }
            temp = temp->next;
        }
        
        //reduce number of if statments
        //here we can see that
        twot->next = NULL;
        if(oneh->next == NULL){
            zerot->next = twoh->next;
        }else{
            zerot->next = oneh->next;
            onet->next = twoh->next;
        }
        //update head
        head = zeroh->next;
        //now delete allocated memery
        zeroh = NULL;
        oneh = NULL;
        twoh = NULL;
        delete zeroh;
        delete oneh;
        delete twoh;
        
        return head;
    }
};