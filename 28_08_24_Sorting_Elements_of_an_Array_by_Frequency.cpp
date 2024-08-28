class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int, int> freq_mp;
        for(int x : arr)
            freq_mp[x]++;
        unordered_map<int, vector<int>> mp;
        vector<int> freq;
        vector<int> singles;
        for(auto it : freq_mp){
            int f = it.second;
            if(f == 1){
                singles.push_back(it.first);
            }
            else if(mp.find(f) != mp.end()){
                mp[f].push_back(it.first);
            } else {
                mp[f] = {it.first};
                freq.push_back(f);
            }
        }
        sort(freq.begin(), freq.end(), greater<int>());
        vector<int> ans;
        for(int i = 0; i < freq.size(); i++){
            vector<int> temp = mp[freq[i]];
            sort(temp.begin(), temp.end());
            for(int j = 0; j < temp.size(); j++){
                for(int k = 0; k < freq[i]; k++){
                    ans.push_back(temp[j]);
                }
            }
        }
        sort(singles.begin(), singles.end());
        for(auto x : singles){
            ans.push_back(x);
        }
        return ans;
    }
};
