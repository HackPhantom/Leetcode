class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf=0;
        int profit=0;
        int mini = prices[0];
        for (int i=1;i<prices.size();i++)
        {
            profit = prices[i]-mini;
            maxProf = max(maxProf, profit);
            mini = min(mini,prices[i]);
        }
        return maxProf;
    }
};