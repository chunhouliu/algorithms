class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 0, width = 0;
        for(char c : s) {
            width += widths[c-'a'];
            if(width > 100) {
                ++lines;
                width = widths[c-'a'];
            }
        }
        return vector<int>{lines+1, width};
    }
};