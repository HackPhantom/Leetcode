class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int key,j=0,num=0;
        for (int i=0; i<=nums.size()-1;i++)
        {
            key = nums[j];
            num++;
            for(j;j<=nums.size()-1;j++) if(nums[j]!=key) break;
            if (j==nums.size()) return num;
            nums[num]=nums[j];
            i=j-1;
        }
    return num;
    }
};