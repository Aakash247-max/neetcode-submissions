class MinStack {
private:
     vector<pair<int,int>> st;
public:
    MinStack() {
    }
    
    void push(int val) {
        if(st.empty()){
            st.push_back({val,val});
        }
        else{
            if(st.back().second < val){
                st.push_back({val,st.back().second});
            }
            else{
                st.push_back({val,val});
            }
        }
    }
    
    void pop() {
        if(!st.empty()){
            st.pop_back();
        }
    }
    
    int top() {
        if(!st.empty()){
            return st.back().first;
        }
    }
    
    int getMin() {
        return st.back().second;
    }
};
