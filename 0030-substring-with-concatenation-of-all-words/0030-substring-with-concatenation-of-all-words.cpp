class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n=words.size();
        int m=words[0].size();
        int k= n*m;
        int si=s.size();
        vector<int> ans;
        if(si<k) return ans;
        unordered_map<string,int> mp,temp;
        for(auto it:words){
                  temp[it]++;
        }
         for(int i=0;i<=si-k;i++){
             mp=temp;
             bool flag=false;
             for(int j=0;j<n;j++){
                 if(flag) break;
                  string str=s.substr(i+j*m,m);
                  if(mp.find(str)!=mp.end()){
                      mp[str]--;
                      if(mp[str]==0){
                          mp.erase(str);
                      }
                  }
                  else{  flag=true;
                          break;
                  }

             }
             if(mp.size()==0) ans.push_back(i);
         }
         return ans;
    }
};