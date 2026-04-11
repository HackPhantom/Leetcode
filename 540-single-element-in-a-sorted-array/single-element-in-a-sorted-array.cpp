class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        if (nums.size()==1) return nums[0];

        int low = 0, high = nums.size()-1;
        int mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if (mid!=0 && mid!=nums.size())
            {
                if (nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
                return nums[mid];

                else if (nums[mid-1]==nums[mid])
                {
                    if (mid%2 !=0) low = mid+1;
                    else high = mid-1;
                }
                else
                {
                    if(mid%2==0) low = mid+1;
                    else high = mid-1;
                }
            }
            else return nums[mid];
        }
        return nums[mid];
    }
};