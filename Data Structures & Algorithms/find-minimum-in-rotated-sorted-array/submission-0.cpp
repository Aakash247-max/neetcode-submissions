class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0;
        int r=nums.size()-1;
        int ans = nums[0];
        while(r>=l){
            int mid  = l+(r-l)/2;
            if(ans>nums[mid]){
                ans = nums[mid];
                r= mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
