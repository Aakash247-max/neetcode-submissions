class Solution {
    int hours(int k,vector<int>&piles){
        int h=0;
        for(auto x:piles){
            h+=x/k;
            if(x%k>0){
                h++;
            }
        }
        return h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k=1;
        int n = piles.size()-1;
        int r = *max_element(piles.begin(),piles.end());
        int ans =r;
        while(k<=r){
           int mid = k+(r-k)/2;
           if(hours(mid,piles)>h){
               k=mid+1;
           }
           else{
               ans = mid;
               r=mid-1;
           }
        }
        return ans;
    }
};
