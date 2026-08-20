class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto it : tokens){
            if(it!="+"&&it!="-"&&it!="*"&&it!="/"){
                st.push(stoi(it));
            }
            else{
                if(it=="+"){
                    int top= st.top();
                    int res;
                    st.pop();
                    res = st.top()+top;
                    st.pop();
                    st.push(res);
                }
                else if(it=="-"){
                    int top= st.top();
                    int res;
                    st.pop();
                    res = st.top()-top;
                    st.pop();
                    st.push(res);
                }
                else if(it=="*"){
                    int top= st.top();
                    int res;
                    st.pop();
                    res = st.top()*top;
                    st.pop();
                    st.push(res);
                }
                else if(it=="/"){
                    int top= st.top();
                    int res;
                    st.pop();
                    if(top==0) break;
                    res = st.top()/top;
                    st.pop();
                    st.push(res);
                }
            }
        }
        return st.top();
    }
};
