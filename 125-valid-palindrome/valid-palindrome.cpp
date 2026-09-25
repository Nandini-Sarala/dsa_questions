class Solution {
public:
    bool isPalindrome(string s) {
        erase_if(s,[](unsigned char c){return !isalnum(c);});
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;j--;
        }
        return true;
        
    }
};