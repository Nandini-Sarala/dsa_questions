class Solution {
public:
    char findTheDifference(string s, string t) {
        char c=t[t.size()-1];
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++){
            c^=s[i];
            c^=t[i];
        }
        return c;
        
    }
};