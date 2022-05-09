Merge Sorted Array 

Approach 1: STL 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin()+m,nums1.end());
        nums2.erase(nums2.begin()+n,nums2.end());
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        
    }
};

Approach 2: 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> v;
        for(int i=0;i<m;i++)
        {
            v.push_back(nums1[i]);
        }
        v.insert(v.end(),nums2.begin(),nums2.end());
        nums1=v;
     sort(nums1.begin(),nums1.end());
    }
};