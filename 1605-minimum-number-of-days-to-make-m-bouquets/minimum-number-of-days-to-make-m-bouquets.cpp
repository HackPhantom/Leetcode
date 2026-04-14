class Solution {
public:

    bool fn(vector<int>& nums, int mid,int m,int k)
    {
        int sum = 0;
        int cnt = 0 ;
        for(int i=0;i<nums.size();i++)
        {
            if (nums[i]<=mid)
            {
                cnt++;
                if (cnt==k)
                {
                    sum+=1;
                    cnt = 0;
                    if (sum == m) return true;
                }
            }
            else cnt = 0;
        }
        return false;
    }

    int minDays(vector<int>& nums, int m, int k) {
        double upd_m = (double)m;
        double upd_k = (double)k;
        if (upd_m*upd_k > nums.size()) return -1;

        int max = nums[0];
        for (int i=1;i<nums.size();i++)
        {
            if (nums[i]>max) max = nums[i];
        }

        int low = 0, high = max;
        int mid;

        while (low<=high)
        {
            mid = low + (high-low)/2;
            if(fn(nums,mid,m,k)) high = mid-1;
            else low = mid+1;
        }
        return low;
        
    }
};