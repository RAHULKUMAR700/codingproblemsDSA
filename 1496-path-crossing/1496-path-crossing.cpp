class Solution {
public:
    bool isPathCrossing(string path) {
        int i=0,j=0;
        bool flag=false;
        set<pair<int,int>> s;
        s.insert({i,j});
        for(auto it:path){
            if(it=='N'){i=i-1;}
            if(it=='S'){i=i+1;}
            if(it=='E'){j=j+1;}
            if(it=='W'){j=j-1;}
            // cout<<i<<" "<<j<<endl;
            if(s.find({i,j})!=s.end()){return true;}
            else{
                s.insert({i,j});
            }
        }
            return false;
    }
};