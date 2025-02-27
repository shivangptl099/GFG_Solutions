class Solution {
  public:
    #define p pair<int, int>
    vector<p> arr;
    int idx;
    
    Solution() {
        idx = -1;
    }

    // Add an element to the top of Stack
    void push(int x) {
        int mini = (idx == -1) ? x : min(arr[idx].second, x);
        arr.push_back({x, mini});
        idx++;
    }

    // Remove the top element from the Stack
    void pop() {
        if(idx == -1) return;
        arr.pop_back();
        idx--;
    }

    // Returns top element of the Stack
    int peek() {
        return (idx == -1) ? -1 : arr[idx].first;
    }

    // Finds minimum element of Stack
    int getMin() {
        return (idx == -1) ? -1 : arr[idx].second;
    }
};
