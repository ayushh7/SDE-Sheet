Rotate Image (Leetcode)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
                int rows=matrix.size(),cols=matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix.size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
for(int i=0;i<rows;i++)
{
    reverse(matrix[i].begin(),matrix[i].end());
}
       // for(int i=0;i<matrix.size();i++)
       // {
       //     swap(matrix[i][0],matrix[i][cols-1]);
            
        //}
        
    }
};