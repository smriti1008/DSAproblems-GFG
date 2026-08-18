/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertAtPos(Node* head, int p, int x) {
        // code here
        Node* temp = head;
        
        for(int i=0; i<p; i++)
        {
            temp = temp->next;
        }
        
        Node* newNode = new Node(x);
        newNode->next = temp->next;
        newNode->prev = temp;
        
        if(temp->next!=NULL)
        {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        return head;
    }
};