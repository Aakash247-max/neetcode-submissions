class Solution {
public:
    string minWindow(string s, string t) {
        int sn = s.size();
        int tn = t.size();
        if(tn>sn) return "";
        int i=0;
        int j=0;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        int minlen=INT_MAX;
        int init=0;
        for(int i=0;i<tn;i++){
            m1[t[i]]++;
        }
        int have = 0;
        int needcount = m1.size();

        while(j<sn){
            m2[s[j]]++;
            if(m1.count(s[j])&&m1[s[j]]==m2[s[j]]){
                have++;
            }
            while(have==needcount){
                if(minlen>j-i+1){
                    minlen = j-i+1;
                    init =i;
                }
                if(m1.count(s[i])&&m1[s[i]]==m2[s[i]]){
                    have--;
                }
                m2[s[i]]--;
                i++;
            }
            j++;
        }
       return minlen == INT_MAX ? "" : s.substr(init, minlen);
    }
};
