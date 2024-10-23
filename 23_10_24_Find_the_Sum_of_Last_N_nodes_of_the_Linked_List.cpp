int sumOfLastN_Nodes(struct Node* head, int n) {
        int len = 0;
        Node* p = head;
        while(p){
            len++;
            p = p->next;
        }
        int target = len - n;
        int i = 0, ans = 0;
        p = head;
        while(p){
            if(i >= target) ans += p->data;
            i++;
            p = p->next;
        }
        return ans;
    }
