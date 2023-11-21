class Solution {
    int revs(int val){
        int ans=0;
        while(val>0){
            ans= ans*10 +val%10;
            val=val/10;
        }
        return ans;
    }
public:
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        long long int ans=0;
        vector<int> rev=nums,diff=nums;
        for(int i=0;i<n;i++){
            rev[i]=revs(rev[i]);
            diff[i]=nums[i]-rev[i];
        }
        unordered_map<int,int> mp;
        for(int i=n-1;i>=0;i--){
            ans+=mp[diff[i]];
            mp[diff[i]]++;
        }
        return ans%1000000007;
    }
};