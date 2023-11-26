 bool comp(int a,int b){
        return b<a;
    }
class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> numberofones(m);
        for(int j=0;j<n;j++){
            int count=0;
            for(int i=0;i<m;i++){
                          if(matrix[i][j]==0) count=0;
                          else count++;

                          numberofones[i].push_back(count);
            }
        }
        int maxarea=0;
        for(int i=0;i<m;i++){
            sort(numberofones[i].begin(),numberofones[i].end(),comp);
            int maxatrow=0;
            for(int j=0;j<n;j++){
                    maxatrow=max(maxatrow,numberofones[i][j]*(j+1));
            }
            maxarea=max(maxarea,maxatrow);
        }
        return maxarea;
    }
};