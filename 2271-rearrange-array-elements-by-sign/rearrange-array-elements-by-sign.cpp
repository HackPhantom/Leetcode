class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int Pos = 0;
        int Neg = 1;
        vector<int> ans(nums.size());
        for (auto it: nums)
        {
            if (it>0)
            {
                ans[Pos] = it;
                Pos+=2;
            }
            else
            {
                ans[Neg] = it;
                Neg+=2;
            }
        }
        return ans;
        
    }
};