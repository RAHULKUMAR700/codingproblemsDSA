class Solution {
public:
    int compress(vector<char>& chars) {
        int count=1;
        vector<char> ans;
        for(int i=0;i<chars.size();i++){
               if(i==0) ans.push_back(chars[i]);

               else if(chars[i]==chars[i-1]) count++;

            if((i>=1)&&(chars[i]!=chars[i-1] || i==chars.size()-1)){
                   int k=0;
               if(count>1)  k=count;
                    string s;
                   while(k){
                       count++;
                       int d = k%10;
                       s+='0'+d;
                       k=k/10;
                   }
                   reverse(s.begin(),s.end());
                   for(auto it :s){
                        ans.push_back(it);
                   }
                   count=1;
                  if(chars[i]!=chars[i-1]) ans.push_back(chars[i]);
               }
        }
        
        chars=ans;
        return chars.size();

    }
};