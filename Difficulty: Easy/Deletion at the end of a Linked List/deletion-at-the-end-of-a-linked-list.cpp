/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next == NULL)
        {
            delete head;
            return NULL;
        }
        Node* temp = head;
        Node* prev;
        while(temp->next!=NULL)
        {
            prev = temp;
            temp=temp->next;
        }
        prev->next=NULL;
        delete temp;
        return head;
    }
};