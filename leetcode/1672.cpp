class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_ = 0;
        for(vector<int>& v : accounts) {
            max_ = max(max_, accumulate(v.begin(), v.end(), 0));
        }
        return max_;
    }
};