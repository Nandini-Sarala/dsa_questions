class Solution {
public:

    int compress(vector<char>& chars) {
        //int n=sizeof(chars)/sizeof(char);
        int idx=0;
        for(int i=0;i<chars.size();i++){
            char ch=chars[i];
            int count=0;
            while(i<chars.size()&&chars[i]==ch){
                count++;i++;
            }
            if(count==1){
                chars[idx++]=ch;
            }
            else{
                chars[idx++]=ch;
                string s=to_string(count);
                for(char d:s){
                    //chars[idx++]=ch;
                    chars[idx++]=d;
                }
            }
            i--;
        }
        return idx;
    }
};