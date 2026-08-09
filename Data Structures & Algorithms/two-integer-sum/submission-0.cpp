class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
           if(mpp.contains(target-nums[i])&&mpp[target-nums[i]]!=i){
              res.push_back(i);
              res.push_back(mpp[target-nums[i]]);
              break;
           }
        }
        return res;
    }
};
