class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mpp;
        for(string x:strs){
            string key =x;
            sort(key.begin(),key.end());
            mpp[key].push_back(x);
        }
        vector<vector<string>> res;
        for(auto x:mpp){
            res.push_back(x.second);
        }
        return res;
    }
};
