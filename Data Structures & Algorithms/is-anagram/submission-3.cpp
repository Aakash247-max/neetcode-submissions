class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;
        int sl = s.length();
        int tl = t.length();
        if(sl!=tl) return false;
        for(int i=0;i<sl;i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<tl;i++){
            mpp[t[i]]--;
        }
        for(auto x:mpp){
            if(x.second!=0){
                return false;
            }
        }
        return true;
    }
};