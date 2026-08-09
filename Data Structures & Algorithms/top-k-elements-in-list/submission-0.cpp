class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>> vec(mpp.begin(),mpp.end());
        sort(vec.begin(),vec.end(),[](auto const &a, auto const &b){
            return a.second>b.second;
        });
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(vec[i].first);
        }
        return res;
    }
};
