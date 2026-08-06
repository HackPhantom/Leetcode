class Solution {
public:
    vector<vector<int>> ans = {};
    void myFn(vector<int>& nums , vector<int>& ds , int index)
    {
        if (index == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        else
        {
            int next = index+1;
            while (next != nums.size() && nums[next] == nums[index]) next++;
            int count = next - index;

            //not including the current element
            myFn(nums , ds , next);

            //including the current element
            for (int i = 1 ; i<= count ; i++)
            {
                ds.push_back(nums[index]);
                myFn(nums , ds , next);
            }
            for (int i = 1 ; i<= count ; i++)
            {
                ds.pop_back();
            }
        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds = {};
        sort(nums.begin() , nums.end());
        myFn(nums , ds , 0);
        return ans;
    }
};