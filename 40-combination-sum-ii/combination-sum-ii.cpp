class Solution {
public:

    vector<vector<int>> ans = {};

    void myFunc(vector<int>& candidates, int index, int target, vector<int>& ds)
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
            return;
        }
        else
        {
            // consider the current element once
            ds.push_back(candidates[index]);
            myFunc(candidates , index + 1 , target-candidates[index] , ds);
            // do not consider the current element once
            ds.pop_back();
            int next = index+1;
            while(next<candidates.size() && candidates[next]==candidates[index]) 
            next++;
            myFunc(candidates , next, target , ds);
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end());
        vector<int> ds ={};
        myFunc(candidates , 0 , target , ds);
        return ans;
    }
};