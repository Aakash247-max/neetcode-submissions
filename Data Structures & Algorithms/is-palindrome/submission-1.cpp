class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]==' '||!isalnum(s[i])){
                continue;
            }
            str+=tolower(s[i]);
        }
        int t = str.length();
        for(int i=0;i<t/2;i++){
            if(str[i]!=str[t-i-1]){
                return false;
            }
        }
        return true;
    }
};
