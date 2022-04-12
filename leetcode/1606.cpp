class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        vector<int> requests(k, 0);
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> q;
        set<int> availables;
        for(int i=0; i<k; ++i) availables.insert(i);
        for(int i=0; i<arrival.size(); ++i) {
            while(!q.empty()) {
                const pair<int,int> &x = q.top();
                if(x.first <= arrival[i]) {
                    availables.insert(x.second);
                    q.pop();
                } else break;
            }
            set<int>::iterator it = availables.lower_bound(i%k);
            if(it==availables.end()) {
                it = availables.lower_bound(0);
            }
            if(it==availables.end()) continue; // pass
            requests[*it]++;
            q.push(make_pair(arrival[i]+load[i], *it));
            availables.erase(it);
        }
        vector<int>::iterator it = max_element(requests.begin(), requests.end());
        vector<int> res;
        for(int i=0; i<k; ++i) {
            if(requests[i]==*it) res.push_back(i);
        }
        return res;
    }
};