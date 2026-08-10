class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea = INT_MIN;
        int n = heights.size();
        for(int i=0,j=n-1;i<j;){
            int area = (j-i)*min(heights[i],heights[j]);
            maxarea = max(maxarea,area);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxarea;
    }
};
