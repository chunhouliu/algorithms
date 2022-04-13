class RandomizedSet {
private:
    unordered_map<int,int> indices;
    vector<int> nums;
public:
    RandomizedSet() {

    }
    
    bool insert(int val) {
        if(indices.find(val)!=indices.end()) return false;
        nums.push_back(val);
        indices[val]=nums.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(indices.find(val)==indices.end()) return false;
        int index = indices[val];
        nums[index]=nums.back();
        indices[nums.back()]=index;
        nums.pop_back();
        indices.erase(val);
        return true;
    }
    
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */