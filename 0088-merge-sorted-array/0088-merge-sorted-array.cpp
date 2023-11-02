class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
       vector<int> nums(m+n,0);
        for(int i=0;i<m;i++){
              nums[i]=nums1[i];

        }
        for(int i=m;i<m+n;i++){
              nums[i]=nums2[i-m];

        }
     sort(nums.begin(),nums.end());
     nums1=nums;


    }
};