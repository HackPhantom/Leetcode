class Solution {
public:
    bool check(vector<int>& nums) {
        bool ch=true;
        for (int d=0; d< nums.size();d++)
        {
            ch=true;
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i+1]<nums[i])
                {
                    ch=false;
                    break;
                }
            } 
            if(ch) return true;
            reverse (nums.begin()+1 , nums.end());
            reverse (nums.begin() , nums.end());      
        }
        return ch;
    }
};