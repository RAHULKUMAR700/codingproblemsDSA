class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
      int m=mat.size();
      int n=mat[0].size();
        vector<int> flagrow(m,0),flagcol(n,0);
        vector<int> flagrow1(m,0),flagcol1(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(mat[i][j]==1){
                   flagrow[i]++;
                    flagcol[j]++;
               }
            }
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){ 
               if((mat[i][j]==1) && (flagrow[i]==1 && flagcol[j]==1)) count++;
            }
            cout<<endl;
        }
        return count;
    }
};