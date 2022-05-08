Sort Colors

Approach 1: 

(Using Library Function)

class Solution {
public:
    void sortColors(vector<int>& nums) {
      sort(nums.begin(),nums.end());    
    }
};


Approach 2: 
(Using brute force Sorting)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>nums[j]){swap(nums[i],nums[j]);}
            }
        }
  
    }
};

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sort Colors.
Memory Usage: 8.2 MB, less than 70.73% of C++ online submissions for Sort Colors.