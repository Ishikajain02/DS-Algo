 class comp{
     public:
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) const {
            if (a.first == b.first) return (a.second < b.second);
            return (a.first > b.first);
        }
 };
class FoodRatings {
public:
    unordered_map<string,int>food2rating;
    unordered_map<string,string>food2cusine;
    unordered_map<string,set<pair<int,string>,comp>>rank;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();i++){
            food2rating[foods[i]]=ratings[i];
            food2cusine[foods[i]]=cuisines[i];
            rank[cuisines[i]].insert({ratings[i],foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        string c= food2cusine[food];
        rank[c].erase({food2rating[food],food});
        rank[c].insert({newRating,food});
        food2rating[food]=newRating;
    }
    
    string highestRated(string cuisine) {
        return (rank[cuisine].begin())->second;
    }
    
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */