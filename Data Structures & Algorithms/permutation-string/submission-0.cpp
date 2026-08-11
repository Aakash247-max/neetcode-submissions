class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n2 = s2.size();
        int n1 = s1.size();

        if (n1 > n2) return false;
        vector<int> hash(26,0);
        vector<int>wnd(26,0);

        for(int i=0;i<n1;i++){
            hash[s1[i]-'a']++;
            wnd[s2[i]-'a']++;
        }
        if(wnd==hash) return true;
        for(int i=0,j=n1;j<n2;i++,j++){

            wnd[s2[i]-'a']--;
            wnd[s2[j]-'a']++;

            if(hash==wnd) return true;
        }
        return false;
    }
};
