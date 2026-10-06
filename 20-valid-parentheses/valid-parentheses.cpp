class Solution {
public:
    bool isValid(string s) {
        stack<char> sc;
        //top=-1;
        for(int i =0;i<s.size();i++){
            if(s[i]=='('|| s[i]=='{'||s[i]=='['){
                sc.push(s[i]);
               // top++;

            }
            else{
                if(sc.size()==0){
                    return false;
                }
                if(sc.top()=='(' && s[i]==')' || sc.top()=='{' && s[i]=='}' || sc.top()=='[' && s[i]==']'){
                    sc.pop();
                }
                else return false;
            
            }
        }
        return sc.size()==0;
        
    }
};