class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int maxi=0;
        vector<int> hash(26,0);
        int i=0;
        int j=0;
        int maxlen=0;
        while(i<=j&&j<n){
            hash[s[j]-'A']++;
            if(hash[s[j]-'A']>maxi){
                maxi = hash[s[j]-'A'];
            }
            if(j-i+1-maxi>k){
                hash[s[i]-'A']--;
                i++;
            }
            else{
               maxlen = max(maxlen,j-i+1);
            }
            j++;
        }
        return maxlen;
    }
};
