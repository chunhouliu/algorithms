// F(0) = 0*a[0]+1*a[1]+...+(n-1)a[n-1]
// F(1) = 0*a[n-1] + 1*a[0] + 2*a[1]+...+(n-1)*a[n-2]
// F(1)-F(0)=a[0]+a[1]+...+a[n-2]+a[n-1]-n*a[n-1]
// F(2) = 0*a[n-2] + 1*a[n-1] + 2*a[0] + 3*a[1] + ... + (n-1)*a[n-3]
// F(2)-F(1)=a[0]+a[1]+...+a[n-3]+*a[n-2]+a[n-1]-n*a[n-2]
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        // Get F(0)
        int f = 0, n=nums.size(), s = accumulate(nums.begin(), nums.end(), 0);
        for(int i=0; i<n; ++i)f += i*nums[i];
        int maxf = f;
        for(int i=1; i<n; ++i) {
            f += s - n * nums[n-i];
            if(f>maxf) maxf=f;
        }
        return maxf;
    }
};