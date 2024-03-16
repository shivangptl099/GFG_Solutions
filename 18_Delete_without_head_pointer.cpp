class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       Node* p = del_node;
       Node* r = del_node;
       Node* q = p -> next;
       int i = 0;
       while(q != NULL){
           if(i > 0) r = r -> next; 
           i++;
           p -> data = q -> data;
           p = p -> next;
           q = q -> next;
       }
       r -> next = NULL;
    }
};
