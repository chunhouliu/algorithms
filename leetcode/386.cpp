class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> res;
        for(int i=1; i<10; ++i) lexicalOrder(i, n, res);
        return res;
    }
    void lexicalOrder(int x, int n, vector<int> &v) {
        if(x>n) return;
        v.push_back(x);
        for(int i=0; i<10; ++i) {
            lexicalOrder(x*10+i, n, v);
        }
    }
};