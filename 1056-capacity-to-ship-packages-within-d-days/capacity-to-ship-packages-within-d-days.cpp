class Solution {
public:

    bool check(vector<int>& vec, int mid, int days)
    {
        int sum = 0;
        int cnt = 0;
        for (int i=0;i<vec.size();i++)
        {
            if (sum<mid) 
            {
                sum += vec[i];
            }
            if(sum==mid)
            {
                sum = 0;
                cnt++;
            }
            else if (sum>mid)
            {
                sum = vec[i];
                cnt++;
            }
        }
        if (sum>0) cnt++;
        if (cnt>days) return false;
        return true;
    }
    int shipWithinDays(vector<int>& vec, int days) {
        int high = 0;
        int low = INT_MIN;
        for (int i=0;i<vec.size();i++)
        {
            high += vec[i];
            if (vec[i]>low) low = vec[i];
        }
        int mid;

        while (low<=high)
        {
            mid = low + (high-low)/2;

            if (check(vec,mid,days)) high = mid-1;
            else low = mid+1;

        }
        return low;
    }
};