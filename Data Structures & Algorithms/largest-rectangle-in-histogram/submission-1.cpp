class Solution {
    public:
    vector<int> nsl(vector<int>&heights){
        int n = heights.size();
        vector<int>res(n);
        stack<int>st;
    
        for(int i=0;i<n;i++){
            if(st.empty()){
                res[i]=-1;
            }
            else{
                while(!st.empty()&&heights[st.top()]>=heights[i]){
                    st.pop();
                }
                if(st.empty()){
                    res[i]=-1;
                }
                else{
                    res[i]=st.top();
                }
            }
            st.push(i);
        }
        return res;
    }
    vector<int> nsr(vector<int>&heights){
          int n = heights.size();
        vector<int>res(n);
        stack<int>st;
    
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                res[i]=n;
            }
            else{
                while(!st.empty()&&heights[st.top()]>=heights[i]){
                    st.pop();
                }
                if(st.empty()){
                    res[i]=n;
                }
                else{
                    res[i]=st.top();
                }
            }
             st.push(i);
        }
        return res;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0;
        vector<int> left;
        vector<int> right;
        right = nsr(heights);
        left = nsl(heights);
        for(int i=0;i<n;i++){
            int area = heights[i]*(right[i]-left[i]-1);
            maxArea = max(area,maxArea);
        }
        return maxArea;
    }
};
