class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i : arr) ++m[i];
        vector<int> v;
        for(pair<const int, int> &p : m) {
            v.push_back(p.first);
        }
        if(m[0]%2==1) return false;
        sort(v.begin(), v.end(), [](int a, int b) {
            return less<int>()(abs(a), abs(b));
        });
        for(int i : v) {
            if(m[2*i]<m[i]) return false;
            m[2*i] -= m[i];
        }
        return true;
    }
};