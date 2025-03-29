class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        int n = interval.size();
        vector<vector<int>> ans;
        sort(interval.begin() , interval.end());

        for(int i = 0; i< n; i++) {
            if(ans.empty() || interval[i][0] > ans.back()[1]) {
                ans.push_back(interval[i]);
            }
            else {
                ans.back()[1] = max(ans.back()[1] , interval[i][1]);
            }
        }
        return ans;
    }
};
