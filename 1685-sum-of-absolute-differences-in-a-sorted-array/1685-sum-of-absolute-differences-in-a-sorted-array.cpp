class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n),postfix(n);
        prefix[0]=nums[0];
        postfix[n-1]=nums[n-1];
        
        for(int i=1;i<n;i++)  prefix[i]=prefix[i-1]+nums[i];
        
        for(int i=n-2;i>=0;i--)  postfix[i]=postfix[i+1]+nums[i]; 
             
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){ 
        if(i-1>=0)   ans[i]+=abs(prefix[i-1]-(nums[i]*i));
        if(i+1<=n-1) ans[i]+=abs(postfix[i+1]-(nums[i]*(n-i-1)));
            }
        return ans;
    }
};