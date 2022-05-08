LeetCode - 73
Set Matrix Zeros

1 1 1      1 0 1    
1 0 1  --> 0 0 0
1 1 1      1 0 1

1. Brute-Force:

Setting the rows and columns of the corresponding to -1 (or any number nt in the range)

Code-
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     int rows=matrix.size();
        int cols=matrix[0].size();
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j]==0){
                     for(int j=0;j<cols;j++)
                     {
                         if(matrix[i][j]!=0)matrix[i][j]=-1;
                     }
                    for(int i=0;i<rows;i++)
                    {
                         if(matrix[i][j]!=0)matrix[i][j]=-1;
                        
                    }
                }
            }
        }
         for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }}}      
    }
};

2. Optimal -
Making the first row and column as a secondary matrix where we tally the matrix and if any zeros if found then we 
make the the first row and first column zero corresponding to the matrix.
int col takes care of the collision of the zeros in the column and row.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     int rows=matrix.size();
        int cols=matrix[0].size();
      int col=1;
        for(int i=0;i<rows;i++)
        { if(matrix[i][0]==0){col=0;}
            for(int j=1;j<cols;j++)
            {
               if(matrix[i][j]==0){matrix[i][0]=0;matrix[0][j]=0;}
            }
        }
         for(int i=rows-1;i>=0;i--)
        { 
            for(int j=cols-1;j>0;j--)
            {
                if(matrix[i][0]==0||matrix[0][j]==0){matrix[i][j]=0;}
            }if(col==0){matrix[i][0]=0;}
         }
        
        
    }
};
Time complexity= O(NxM)
Space complexity=O(1)


