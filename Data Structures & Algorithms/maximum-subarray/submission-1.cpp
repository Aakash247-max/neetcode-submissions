class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currsum = nums[0];
        int maxi= nums[0];
        for(int i=1;i<n;i++){
            if(currsum<0){
                currsum = 0;
            }
            currsum +=nums[i];
            maxi = max(currsum,maxi);
        }
        return maxi;
    }
};
