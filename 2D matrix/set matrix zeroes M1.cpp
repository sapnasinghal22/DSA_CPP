
class Solution {
public:
void markrow(int i,int m , vector<vector<int>> &matrix)
{
    for(int j=0;j<m;j++)
    {
        if(matrix[i][j]!=0)
        {
            matrix[i][j]=-123456789;
        }
    }
}
void markcol(int j,int n , vector<vector<int>> &matrix)
{
    for(int i=0;i<n;i++)
    {
        if(matrix[i][j]!=0)
        {
            matrix[i][j]=-123456789;
        }
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        int n =matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    markrow(i,m,matrix);
                    markcol(j,n,matrix);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==-123456789)
                {
                   matrix[i][j]=0;
                }
            }
        }
        
    }
};
// brute code 
// use -123456789 bcoz of constraint 
// t.c.:- o(n^3)
