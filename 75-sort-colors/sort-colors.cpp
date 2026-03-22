class Solution {
public:
    void sortColors(vector<int>& nums) {
        auto low = nums.begin();
        auto mid = nums.begin();
        auto high = nums.end();
        int flag=0;
        while(mid!=high)
        {
            if (*mid==0 && flag==0)
            {
                low++;
                mid++;
            }
            else if(*mid ==0 && flag==1)
            {
                iter_swap(low,mid);
                low++;
            }
            else if(*mid==1)
            {
                mid++;
                flag=1;
            }
            else
            {
                iter_swap(mid,high-1);
                high--;
            }
        }

    }
};