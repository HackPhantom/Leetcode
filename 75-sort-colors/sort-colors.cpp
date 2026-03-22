class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> vec(3,0);
        for(auto i: nums) vec[i]++;
        int i=0,j=0;
        for(i;i<vec[0];i++) 
        {
            nums[i]=0;
        }
        j=i;
        for(i;i<j+vec[1];i++) 
        {
            nums[i]=1;
        }
        j=i;
        for(i;i<j+vec[2];i++) 
        {
            nums[i]=2;
        }
    }
};