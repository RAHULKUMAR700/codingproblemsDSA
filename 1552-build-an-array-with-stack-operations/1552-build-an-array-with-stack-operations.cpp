class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
          unordered_map<int,int> mp;
          int k=target.size();
          for(auto it:target){
              mp[it]++;
          }
          for(int i=1;i<=n&&i<=target[k-1];i++){
                 if(mp[i]==0){
                     ans.push_back("Push");
                     ans.push_back("Pop");
                 }
                 else{
                     ans.push_back("Push");
                 }
          }

        return ans;
    }
};