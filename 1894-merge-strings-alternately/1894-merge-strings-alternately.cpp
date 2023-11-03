class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int k=word2.size();
        bool flag=true;
        if(n<k){flag=false;}
        string s;
        int i;
        for(i=0;i<min(n,k);i++){
             s+=word1[i];
             s+=word2[i];
        }
        for(;i<max(n,k);i++){
            if(flag){
                  s+=word1[i];
            }
            else{
                   s+=word2[i];
            }
        }
        return s;
    }
};