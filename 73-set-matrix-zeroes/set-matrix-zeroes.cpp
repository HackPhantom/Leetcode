class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstRowZero = false;
        bool firstColZero = false;

        for (auto i: matrix[0])
        {
            if (i==0)
            {
                firstRowZero = true;
                break;
            }
        }
        for (int i = 0; i<matrix.size(); i++)
        {
            if (matrix[i][0]==0)
            {
                firstColZero = true;
                break;
            }
        }

        for (int i=1;i<matrix.size();i++)
        {
            for (int j=1;j<matrix[0].size();j++)
            {
                if (matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for (int i=1;i<matrix.size();i++)
        {
            for (int j=1;j<matrix[0].size();j++)
            {
                if (matrix[0][j]==0 || matrix[i][0]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if (firstRowZero == true)
        {
            matrix[0] = vector<int>(matrix[0].size(),0);
        }
        if (firstColZero == true)
        {
            for(int i =0; i<matrix.size();i++)
            {
                matrix[i][0] = 0;
            }
        }


    }
};