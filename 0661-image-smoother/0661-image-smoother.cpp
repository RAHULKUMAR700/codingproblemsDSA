class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
       int m=img.size();
       int n=img[0].size();
       vector<vector<int>> ans=img;
       int count;
        int val;
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               count=0;val=0;
               for(int k=-1;k<=1;k++){
                   for(int l=-1;l<=1;l++){

                       int row=i+k;
                       int col=j+l;
                          if(row>=0 && row<m && col<n && col>=0){
                              count++;
                              val+=img[row][col];  
                          }
                   }
               }
               ans[i][j]=val/count;
           }
       }
       return ans; 
    }
};