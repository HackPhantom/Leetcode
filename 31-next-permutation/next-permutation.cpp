class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        auto it = nums.end()-2;
        for(it;it>nums.begin();it--)
        {
            if (*(it)<*(it+1))
            {
                for(auto it2=nums.end()-1;it2>=it+1;it2--)
                {
                    if(*it2 > *it)
                    {
                        iter_swap(it,it2);
                        reverse(it+1,nums.end());
                        return;
                    }
                }
            }
        }
        if(it==nums.begin() && *(it)<*(it+1))
        {
            for(auto it2=nums.end()-1;it2>=it+1;it2--)
                {
                    if(*it2 > *it)
                    {
                        iter_swap(it,it2);
                        reverse(it+1,nums.end());
                        return;
                    }
                }
        }
        reverse(nums.begin(),nums.end());
        
    }
};