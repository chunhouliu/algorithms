class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> res;
        int cindex = -1;
        for(int i=0; i<s.size(); ++i) {
            if(s[i]==c) {
                cindex=i;
                break;
            }
        }
        for(int i=0; i<s.size(); ++i) {
            if(s[i]==c) cindex=i;
            res.push_back(abs(i-cindex));
        }
        for(int i=s.size()-1; i>=0; --i) {
            int x = abs(i-cindex);
            res[i]=min(x, res[i]);
            if(s[i]==c) cindex=i;
        }
        return res;
    }
};