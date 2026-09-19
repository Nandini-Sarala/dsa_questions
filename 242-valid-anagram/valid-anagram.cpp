class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        int arrs[26]={0};
        int arrt[26]={0};
       
        for(int i=0;i<s.size();i++){
            arrs[s[i]-'a']+=1;
             arrt[t[i]-'a']+=1;
        }
        
        for(int i=0;i<26;i++){
            if(arrs[i]!=arrt[i]){
                return false;
             }
        }
         return true;
    }
};