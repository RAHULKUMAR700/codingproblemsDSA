class Solution {
public:
    int numberOfMatches(int n) {
     int ans=0;
     while(n>0){
         if(n%2==0){
           ans+=n/2;
           n=n/2;
         }else{
              ans+=n/2;
             if(n!=1) {n=n/2+1;}
             else{n=0;}
         }
         
     }
     return ans;   
    }
};