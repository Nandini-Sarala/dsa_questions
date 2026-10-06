class Solution {
public:
    int minAddToMakeValid(string s) {
        int ob=0;
       int cb=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                ob++;
            }
            else{
                if (ob>0){
                    ob--;
                     }
                     else {
                        cb++;
                     }
            }
        }
        return ob+cb;
        
    }
};