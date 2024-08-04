class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        vector<pair<int, int>> meetings;
        for(int i = 0; i < n; i++){
            meetings.push_back({end[i], start[i]});
        }
        sort(meetings.begin(), meetings.end());
        int ans = 0;
        int endTime = -1;
        for(int i = 0; i < n; i++){
            if(endTime < meetings[i].second){
                endTime = meetings[i].first;
                ans++;
            }
        }
        return ans;
    }
};
