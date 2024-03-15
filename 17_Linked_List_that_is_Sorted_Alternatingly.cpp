/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

// Solution with O(n) time complexity & O(n) Space Complexity
class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
        Node* p = *head;
        vector<int> temp1;
        vector<int> temp2;
        int i = 0;
        while(p){
            if(i % 2 == 0) temp1.push_back(p -> data);
            else temp2.push_back(p -> data);
            i++;
            p = p -> next;
        }
        p = *head;
        for(int x : temp1){
            p -> data = x;
            p = p -> next;
        }
        i = temp2.size() - 1;
        while(i >= 0){
         p -> data = temp2[i--];
         p = p -> next;
        }
    }
};
