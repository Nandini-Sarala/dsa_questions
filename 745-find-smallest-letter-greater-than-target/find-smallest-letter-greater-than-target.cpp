class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    int st=0;
        int end=letters.size()-1;
       // int mid;
        // if(int(target)>=int(letters[end])){
        //    // cout<<letters[0];
        //     return letters[0];
        // }
            
        // else{
        while(st<=end ){
            int mid=st+(end-st)/2;
            if(int(target)<int(letters[mid])){
                end=mid-1;
            }
            // else if(int(target)>int(letters[mid])){
            //     st=mid+1;
            // }
            else 
            {
                st=mid+1;
            }
            // else{
               
            //    // cout<<letters[mid+1];
            //     return letters[mid+1];
            // }
        }
            
           
       // }
       // cout<<letters[st];
        return letters[st%letters.size()];

        
    }
};