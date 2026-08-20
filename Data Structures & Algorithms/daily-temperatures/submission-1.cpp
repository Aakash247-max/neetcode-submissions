class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n,0);
        stack<int>st;
        st.push(0);
        int i=1;

        while(i<n){
            while(!st.empty()&&temperatures[st.top()]<temperatures[i]){
                result[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
            i++;
        }
        return result;
    }
};
