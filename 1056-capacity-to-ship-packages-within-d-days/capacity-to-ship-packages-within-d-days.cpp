class Solution {
public:

    bool fn(vector<int>& nums, int capacity, int days)
    {
        int sum = 0;
        int calc_days = 1;
        for(int i=0; i<nums.size();i++)
        {
            sum += nums[i];
            if (sum>capacity)
            {
                calc_days++;
                sum = nums[i];
                if (calc_days>days) return false;
            }
        }
        if(days>=calc_days) return true;
        return false;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int high = 0;
        int max = nums[0];
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]>max) max = nums[i];
            high += nums[i];
        }
        int low = max, mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if (fn(nums,mid,days)) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};