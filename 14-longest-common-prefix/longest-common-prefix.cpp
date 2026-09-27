class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
       string r="";
       string f=strs[0];
       string l=strs[strs.size()-1];
       for(int i=0;i<f.size();i++){
        if(f[i]!=l[i]){
           return r;
        }
        r+=f[i];
       }
       return r;
    }
};