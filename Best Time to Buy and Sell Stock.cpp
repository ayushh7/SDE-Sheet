Best Time to Buy and Sell Stock 
Leetcode 121

1. Brute Force
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i;j<prices.size();j++)
            {
                int p2=prices[j]-prices[i];
                p=max(p,p2);
            }
        }return p;
        
    }
};

2. Optimal

1.traverse through loop and calculate the minimum element
2.Parallelly calculate the maximum profit by substracting from the current element
with the minimum element till that point;


class Solution {
    public:
        int maxProfit(vector<int>& prices) {
           int mx=0,mn=INT_MAX;
            for(int i=0;i<prices.size();i++)
            {
                mn=min(mn,prices[i]);
                mx=max(mx,prices[i]-mn);
            }
            return mx;
            
            
          
            
        }
    };