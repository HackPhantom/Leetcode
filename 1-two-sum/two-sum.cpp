#include<bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0 , right=nums.size()-1;
        int sum;
        vector<pair<int,int>>vec;
        pair<int,int>p;
        for (int i=0;i<nums.size();i++)
        {
            p.first=nums[i];
            p.second=i;
            vec.push_back(p);
        }
        sort(nums.begin(),nums.end());
        vector<int> v;
        while (left<right)
        {
            sum = nums[left]+nums[right];
            if (sum>target) right--;
            else if (sum<target) left++;
            else 
            {
                for (int i=0;i<nums.size();i++)
                {
                    if(vec[i].first==nums[left]) 
                    v.push_back(vec[i].second);
                    else if(vec[i].first==nums[right])
                    v.push_back(vec[i].second);
                }

                return v;
            }

        }
        return v;
    }
};