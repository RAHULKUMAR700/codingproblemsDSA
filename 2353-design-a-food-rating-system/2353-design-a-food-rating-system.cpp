class FoodRatings {
public:
struct cmp{
         bool operator()(pair<string,int> a,pair<string,int> b) const{
             if(a.second==b.second) return a.first<b.first;
             return a.second>b.second;
         };
};
    //mp1 to find which cuisine to check for changeRating.
    unordered_map<string,pair<string,int>> mp1;//food to cuisine
    //map2 of cuisine -> (food,rating) to figure out higest rated food for a cuisine
    unordered_map<string,set<pair<string,int>, cmp> > mp2;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n=foods.size();
        
        for(int i=0;i<n;++i){
            mp1[foods[i]]=make_pair(cuisines[i],ratings[i]);
            mp2[cuisines[i]].insert(make_pair(foods[i],ratings[i]));
        }
    }
    
    void changeRating(string food, int newrating) {
        //find cuisine where to update
        auto itr =mp1.find(food);
        string cuisine =(itr->second).first;
        int rating=(itr->second).second;
        //update food rating map
        mp2[cuisine].erase(mp2[cuisine].find(make_pair(food,rating)));
        mp2[cuisine].insert(make_pair(food,newrating));
        
        //update food to cuisine
        mp1[food]=make_pair(cuisine,newrating);
    }
    
    string highestRated(string cuisine) {
        return(mp2[cuisine].begin())->first;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */