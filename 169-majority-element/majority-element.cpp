class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i=0;
        int m=nums[0];

        for(auto it:nums)
        {
            if (it==m)
            {
                i++;
            }
            else if(it!=m && i>0)
            {
                i--;
            }
            else if(it!=m && i==0)
            {
                i++;
                m=it;
            }

        }
        return m;
        
    }
};