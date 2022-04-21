class Solution {
public:
    string toGoatLatin(string sentence) {
        vector<string> words = split(sentence);
        string res;
        for(int i=0; i<words.size(); ++i) {
            string &w = words[i];
            if(isVowel(w[0])) {
                res+=w+"ma";
            } else {
                res+=w.substr(1)+w[0]+"ma";
            }
            res += string(i+1, 'a');
            res += ' ';
        }
        res.pop_back();
        return res;
    }
    bool isVowel(char x) {
        return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
                x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U';
    }
    vector<string> split(const string& s) {
        vector<string> res;
        int i=0;
        while(i<s.size()) {
            while(i<s.size() && s[i]==' ') ++i;
            if(i==s.size()) break;
            int start = i;
            while(i<s.size() && s[i]!=' ') ++i;
            res.push_back(s.substr(start, i-start));
        }
        return res;
    }
};