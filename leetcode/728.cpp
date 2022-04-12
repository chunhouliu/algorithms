class Solution {
public:
    bool isSelfDividing(int x) {
        int y = x;
        while(y!=0) {
            int t=y%10;
            if(t==0) return false;
            if(x%t!=0) return false;
            y /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left; i<=right; ++i) {
            if(isSelfDividing(i)) res.push_back(i);
        }
        return res;
    }
};