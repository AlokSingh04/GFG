/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* curr){
        Node* prev = nullptr;
        
        while(curr){
            Node* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        return prev;
    }
  
    Node* addTwoLists(Node* num1, Node* num2) {
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        Node dummy(0);
        Node* p = &dummy;
        int carry = 0;
        
        while(num1 || num2 || carry){
            int sum = carry;
            
            if(num1){
                sum+=num1->data;
                num1 = num1->next;
            }
            if(num2){
                sum+=num2->data;
                num2 = num2->next;
            }
            
            p->next = new Node(sum%10);
            carry = sum/10;
            p = p->next;
        }
        
        p = dummy.next;
        p = reverse(p);
        if(p->data == 0){
            p = p->next;
        }
        
        return p;
    }
};