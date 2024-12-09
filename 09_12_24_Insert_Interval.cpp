class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        vector<vector<int>> ans;
        bool added = false, done = false;
        int newStart = newInterval[0], newEnd = newInterval[1];
        for(int i = 0; i < intervals.size(); i++){
            if(done) ans.push_back(intervals[i]);
            else if(!added){
                int start = intervals[i][0], end = intervals[i][1];
                if(newStart <= end){
                    if(newEnd < start){
                        done = true;
                        ans.push_back(newInterval);
                        ans.push_back(intervals[i]);
                    } else {
                        newStart = min(start, newStart);
                        newEnd = max(end, newEnd);
                        added = true;
                    }
                }
                else ans.push_back({start, end});
            } else {
                if(newEnd >= intervals[i][0]){
                    newStart = min(newStart, intervals[i][0]);
                    newEnd = max(newEnd, intervals[i][1]);
                } else {
                    ans.push_back({newStart, newEnd});
                    ans.push_back(intervals[i]);
                    done = true;
                }
            }
        }
        if(!done) ans.push_back({newStart, newEnd});
        return ans;
    }
};
