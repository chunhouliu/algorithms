/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:
    NestedInteger deserialize(string s) {
        stack<NestedInteger> stk;
        int idx = 0;
        while(idx<s.size()) {
            char c = s[idx];
            if(c=='[') {
                stk.push(NestedInteger());
                ++idx;
            } else if(c==']') {
                if(stk.top().isInteger()) {
                    NestedInteger x = stk.top(); stk.pop();
                    stk.top().add(x);
                }
                if(stk.size()>1) {
                    NestedInteger x = stk.top(); stk.pop();
                    stk.top().add(x);
                }
                ++idx;
            } else if(c==',') {
                if(stk.top().isInteger()) {
                    NestedInteger x = stk.top(); stk.pop();
                    stk.top().add(x);
                }
                ++idx;
            } else {
                int val=0;
                int sign = 1;
                if(c=='-') {
                    sign=-1;
                    ++idx;
                }
                while(idx<s.size() && isdigit(s[idx])) {
                    val=val*10+s[idx]-'0';
                    ++idx;
                }
                stk.push(NestedInteger(val*sign));
            }
        }
        return stk.top();
    }
};