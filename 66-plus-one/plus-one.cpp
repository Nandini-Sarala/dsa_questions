class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        //vector<int> arr;
        if(i==0){
            if(digits[i]==9)
            return {1,0};
            else{
                digits[i]+=1;
                return digits;

            }

        }
     
        while(i>=0){
            if(digits[i]==9){
                digits[i]=0;
                i--;


            }else {
                //if(digits[i]<9)
                digits[i]+=1;
                return digits;

            }
            
            
        }
        digits.insert(digits.begin(),1);
        return digits;

        
    }
};