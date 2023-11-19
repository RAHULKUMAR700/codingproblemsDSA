class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> st;
       unordered_map<int,int> mp;
        for(auto it:nums){
                 st.insert(it);
                 mp[it]++;
        }
        int n=st.size();
        vector<int> arr;
        for(auto it:st){
            arr.push_back(it);
        }
        int ans=0; 
        for(int i=n-1;i>=0;i--){
             ans+=mp[arr[i]]*i;
        }
     return ans;
    }
};