class Solution {
public:
    bool fn(vector<int>& nums, int divisor, int threshold)
    {
        int sum = 0;
        for (int i=0; i<nums.size();i++)
        {
            sum += (nums[i]+divisor-1)/divisor;
            if (sum>threshold) return false;
        }
        if(sum>threshold) return false;
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if (nums[i]>max) max = nums[i];
        }

        int low = 1, high = max;
        int mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if (fn(nums,mid,threshold)) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};