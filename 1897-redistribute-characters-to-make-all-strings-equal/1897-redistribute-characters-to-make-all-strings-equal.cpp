class Solution {
public:
    bool makeEqual(vector<string>& words) {
         unordered_map<char, int> hm;
    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words[i].length(); j++) {
            hm[words[i][j]]++;
        }
    }
    int n = words.size();
    for (auto count : hm) {
        if (count.second % n != 0) {
            return false;
        }
    }
    return true;
    }
};