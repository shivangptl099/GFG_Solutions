class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        vector<int> temp;
        int i = arr.size() - 1;
        temp.push_back(arr[i]);
        vector<int> ans(arr.size());
        ans[i] = 0;
        i--;
        while(i >= 0){
            int count = 0;
            for(auto it : temp){
                if(arr[i] > it) break;
                count++;
            }
            ans[i] = temp.size() - count;
            temp.push_back(arr[i]);
            sort(temp.begin(), temp.end(), greater<int>());
            i--;
        }
        return ans;
    }
};
