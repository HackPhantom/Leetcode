class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = lower_bound(nums.begin(),nums.end(),0) - nums.begin();
        int n = nums.size();
        if (pos==n) return n;
        else if (nums[pos]==0)
        {
            int i=pos;
            while (i<n && nums[i]==0)
            {
                i+=1;
            }
            if (i==n) return pos;
            else return max(n-i , pos);
        }
        else
        {
            return max(n-pos , pos);
        }
    }
};