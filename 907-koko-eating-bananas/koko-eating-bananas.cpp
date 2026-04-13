class Solution {
public:

    bool fn(vector<int>& nums,int check,int h)
    {
        long sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum += (nums[i]%check==0)?(nums[i]/check):(nums[i]/check+1);
            if (sum>h) return false;
        }
        if(sum<=h) return true;
        return false;
    }

    int minEatingSpeed(vector<int>& nums, int h) {
        int max = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>max) max = nums[i];
        }

        int ans = 0;
        int low = 1, high = max; 
        int mid;
        
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if (fn(nums,mid,h)) 
            {
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;

    }
};