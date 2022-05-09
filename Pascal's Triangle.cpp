Pascal Triangle:

Problem Type 1:
If column number and row number is given:

Formula: (r-1)
           C
            (c-1)
Time=O(N)

Problem type 2:
If a row is asked to print.
for(int i=0;i<k;++i)
{
    res*=(n-i);
    res/=(i+1);
}
Time=O(N)

Problem type 3:
To print the complete pascal tree:

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for(int i=0;i<numRows;i++)
        {
            v[i].resize(i+1);
            v[i][0]=v[i][i]=1;
            for(int j=1;j<i;j++)
            {
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }return v;
           
    }
};
Time=O(NxN)