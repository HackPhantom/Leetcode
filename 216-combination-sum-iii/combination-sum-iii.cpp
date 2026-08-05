class Solution {
public:
    vector<vector<int>> ans = {};

    void myFunc(vector<int>& candidates, int index, int target, vector<int>& ds, int k)
    {
        if (target == 0 && ds.size()==k)
        {
            ans.push_back(ds);
            return;
        }
        else if (ds.size() > k)
        {
            return;
        }
        else if (index == candidates.size())
        {
            return;
        }
        else if (target<candidates[index])
        {
            return;
        }
        else
        {
            // consider the current element once
            ds.push_back(candidates[index]);
            myFunc(candidates , index+1 , target-candidates[index] , ds , k);
            // do not consider the current element once
            ds.pop_back();
            myFunc(candidates , index + 1 , target , ds , k);
        }
    }



    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds ={};
        vector<int> candidates = {1,2,3,4,5,6,7,8,9};
        myFunc(candidates , 0 , n , ds , k);
        return ans;
    }
};