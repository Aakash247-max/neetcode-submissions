class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxlen = 0;
        unordered_map<char,int> mpp;

        for(int l=0,r=0;r<n;r++){
            if(mpp.find(s[r])!=mpp.end()&&mpp[s[r]]>=l){
                l=mpp[s[r]]+1;
            }
            mpp[s[r]]=r;
            maxlen = max(maxlen,r-l+1);
        }
        return maxlen;
    }
};
