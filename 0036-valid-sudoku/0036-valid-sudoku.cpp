class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> st;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.')
                  {int boxnumber= ((i/3)*3 + j/3);
                  string row,col,box;
                  string r,c,b;
                  r='0'+i;c='0'+j;b='0'+boxnumber;
                  row="row"+r+board[i][j];
                  col="col"+c+board[i][j];
                  box="box"+b+board[i][j];
                  if(st.find(row)!=st.end()||st.find(col)!=st.end()||st.find(box)!=st.end()){
                      return false;
                  }
                  else{
                      st.insert(row);
                      st.insert(col);
                      st.insert(box);   
                  }}
            }
        }
        return true;
    }
};