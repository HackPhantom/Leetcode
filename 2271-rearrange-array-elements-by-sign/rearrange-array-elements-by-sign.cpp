class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>Pos;
        vector<int>Neg;
        for (auto it: nums)
        {
            if (it>0) Pos.push_back(it);
            else Neg.push_back(it);
        }
        nums.erase(nums.begin(),nums.end());
        for (int i=0;i<Pos.size();i++)
        {
            nums.push_back(Pos[i]);
            nums.push_back(Neg[i]);
        }
        return nums;
        
    }
};