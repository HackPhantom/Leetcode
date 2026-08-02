class Solution {
public:
    vector<string> vec = {};
    void myFunc(int n, int curr_open, int curr_close, string current)
    {
        if (curr_open == n && curr_open == curr_close)
        {
            vec.push_back(current);
            return;
        }
        else if (curr_open < n && curr_open == curr_close)
        {
            myFunc(n , curr_open+1 , curr_close , current+"(");
            return;
        }
        else if (curr_open == n && curr_open > curr_close)
        {
            myFunc(n , curr_open , curr_close+1 , current+")");
            return;
        }
        else if (curr_open < n && curr_open > curr_close)
        {
            myFunc(n , curr_open+1 , curr_close , current+"(");
            myFunc(n , curr_open , curr_close+1 , current+")");
            return;
        }


    }
    vector<string> generateParenthesis(int n) {
        myFunc(n , 0 , 0 , "");
        return vec;
    }
};