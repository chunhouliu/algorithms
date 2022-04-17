class Solution {
public:
    string getLower(string &x) {
        string s;
        for(char c : x) s += tolower(c);
        return s;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string, int> m;
        int index = 0, maxCount=0;
        while(index<paragraph.size()) {
            while(index<paragraph.size() && !isalpha(paragraph[index]))++index;
            if(index==paragraph.size()) break;
            int start = index;
            while(index<paragraph.size() && isalpha(paragraph[index]))++index;
            int end = index;
            string s = paragraph.substr(start, end-start);
            s = getLower(s);
            if(find(banned.begin(), banned.end(), s)!=banned.end()) continue;
            m[s]++;
            maxCount=max(maxCount, m[s]);
        }
        string res;
        for(auto & i : m) {
            if(i.second == maxCount) {
                res=i.first;
                break;
            }
        }
        return res;
    }
};