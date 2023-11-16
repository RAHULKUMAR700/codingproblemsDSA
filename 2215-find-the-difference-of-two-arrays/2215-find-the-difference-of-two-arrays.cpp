class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        set<int> st1,st2;
        unordered_map<int,int> mp1,mp2;
        for(auto it :nums1){
            mp1[it]++;
        }
        for(auto it :nums2){
            mp2[it]++;
        }
        for(auto it :nums1){
            if(mp2[it]==0){
                st1.insert(it);
            }
        }
        for(auto it :nums2){
            if(mp1[it]==0){
                st2.insert(it);
            }
        }
        for(auto it:st1){
            ans[0].push_back(it);
        }
        for(auto it:st2){
            ans[1].push_back(it);
        }
        return ans;
    }
};