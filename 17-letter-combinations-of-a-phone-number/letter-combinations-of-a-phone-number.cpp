class Solution {
public:
    vector<string> myFn(vector<string>& ds , vector<string>& ans)
    {
        if (ds.size() == 0)
        {
            return ans;
        }
        else if (ans.size() == 0 && ds.size() == 1)
        {
            for (auto i : ds[0])
            {
                ans.push_back(string(1, i));
            }
            return ans;
        }
        else if (ans.size() == 0 && ds.size() == 2)
        {
            string curr = "";

            for (int i = 0 ; i < ds[0].size() ; i++)
            {
                curr = ds[0][i];
                for (int j = 0 ; j < ds[1].size() ; j++)
                {
                    curr += ds[1][j];
                    ans.push_back(curr);
                    curr.pop_back();
                }
                curr = "";
            }
            return ans;
        }
        else if (ans.size() == 0 && ds.size() > 2)
        {
            string curr = "";

            for (int i = 0 ; i < ds[0].size() ; i++)
            {
                curr = ds[0][i];
                for (int j = 0 ; j < ds[1].size() ; j++)
                {
                    curr += ds[1][j];
                    ans.push_back(curr);
                    curr.pop_back();
                }
                curr = "";
            }
            ds.erase(ds.begin());
            ds.erase(ds.begin());
            return myFn(ds , ans);

        }

        else
        {
            vector<string> main = {};
            for (int i = 0; i < ans.size() ; i++)
            {
                for (int j = 0; j < ds[0].size() ; j++)
                {
                    main.push_back(ans[i] + ds[0][j]);
                }
            }
            ds.erase(ds.begin());
            return myFn(ds , main);
        }

    }


    vector<string> letterCombinations(string digits) {
        map<char , string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        vector<string> ds = {};
        vector<string> ans = {};
        for(auto i: digits)
        {
            ds.push_back(mp[i]);
        }


        vector<string> final_ans = myFn(ds , ans);
        return final_ans;
    }
};