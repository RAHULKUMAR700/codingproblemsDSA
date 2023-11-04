class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        int l=left.size();
        int r=right.size();
        int li,ri;
     if(l!=0)   li=left[l-1];

     if(r!=0)  ri=n-right[0];

           if(l==0)return ri;

           if(r==0)return li;
           
           return max(li,ri);
    }
};