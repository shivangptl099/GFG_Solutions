class Solution {
  public:
    bool isPalindrome(string s){
        if(s.length() < 2) return true;
        int l = 0, h = s.length() - 1;
        while(l < h){
            if(s[l] != s[h]) return false;
            l++;
            h--;
        }
        return true;
    }
    bool compute(Node* head) {
        string s;
        Node* temp = head;
        while(temp){
            s += temp -> data;
            temp = temp -> next;
        }
        return isPalindrome(s);
    }
};
