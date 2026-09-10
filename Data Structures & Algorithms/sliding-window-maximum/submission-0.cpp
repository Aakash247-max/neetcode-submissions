class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>res;
    
        priority_queue<pair<int,int>>heap;
        for(int i=0;i<k;i++){
            heap.push({nums[i],i});
        }
        for(int i=0;i+k-1<n;i++){
            heap.push({nums[i+k-1],i+k-1});
            
            while(heap.top().second<i){
                heap.pop();
            }
            res.push_back(heap.top().first);
        }
        return res;
    }
};
