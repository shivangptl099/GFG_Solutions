class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        vector<char> consonants;
        vector<char> vowels;
        Node* p = head;
        while(p){
            if(p->data == 'a' || p->data == 'e' || p->data == 'i' || p->data == 'o' || p->data == 'u')
                vowels.push_back(p->data);
            else consonants.push_back(p->data);
            p = p->next;
        }
        p = head;
        int i = 0;
        while(i < vowels.size()){
            p->data = vowels[i];
            p = p->next;
            i++;
        }
        i = 0;
        while(i < consonants.size()){
            p->data = consonants[i];
            p = p->next;
            i++;
        }
        return head;
    }
};
