class Solution {
    void breakstring(string s,vector<string> &v){
         string word="";
         for(auto it:s){
             if(it==' '){
                 v.push_back(word);
                  word="";
             }
             else{
                 word+=it;
             }
         }
          v.push_back(word);
    }
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp1;
        unordered_map<string,bool> mp2;
        vector<string> v;
        breakstring(s,v);
        int n=pattern.size();
        if(n!=v.size()) return false;
        for(int i=0;i<n;i++){
            
            if(mp1.find(pattern[i])==mp1.end()){
                if(mp2[v[i]]==true){ 
                return false;}
                else{
                      mp2[v[i]]=true;
                    mp1[pattern[i]]=v[i];
                }
            
            }
            else{
                if(mp1[pattern[i]]!=v[i]){
                    
                     return false;
                }
            }
        }
        return true;
    }
};