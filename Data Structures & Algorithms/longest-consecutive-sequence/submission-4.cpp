class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;
        int maxi=INT_MIN;
        if(nums.size()<=1) return nums.size();
        for(int i=1;i<nums.size();i++){
            int curr = nums[i];
            if(curr==nums[i-1]+1){
                cnt++;
            }
            else if(curr-nums[i-1]>1){
                cnt = 1;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};
