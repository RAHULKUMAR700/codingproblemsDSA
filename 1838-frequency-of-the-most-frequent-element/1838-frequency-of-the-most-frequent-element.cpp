class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=INT_MIN;
        int l=0,r=0;
        long sum=0;
        while(r<n){
            sum+=nums[r];
            while((long)nums[r]*(long)(r-l+1)>k+sum){
                sum-=nums[l];
                l++;
                
            }
            ans=max(ans,(r-l+1));
                r++;     

        }
        
        return ans;
    }
};