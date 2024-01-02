class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=0;
        for(auto it:nums){
                mp[it]++;
                n=max(n,mp[it]);
        }
        vector<vector<int>> ans(n);
         vector<set<int>> s(n);
         for(auto it:nums){
                for(int i=0;i<n;i++){
                    if(s[i].find(it)==s[i].end()){
                        ans[i].push_back(it);
                        s[i].insert(it);
                        break;
                    }
                }
         }
         return ans;
    }
};