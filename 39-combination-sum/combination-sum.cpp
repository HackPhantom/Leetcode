class Solution {
public:

    vector<vector<int>> ans = {};

    void myFunc(vector<int>& candidates , int index , int target , vector<int> ds)
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
        else if (index == candidates.size())
        {
            return;
        }
        else if (target<candidates[index])
        {
            //skip the current one
            // do not consider the current element once
            myFunc(candidates , index + 1 , target , ds);
        }
        else
        {
            // consider the current element once
            ds.push_back(candidates[index]);
            myFunc(candidates , index , target-candidates[index] , ds);
            // do not consider the current element once
            ds.pop_back();
            myFunc(candidates , index + 1 , target , ds);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds ={};
        myFunc(candidates , 0 , target , ds);
        return ans;
    }
};