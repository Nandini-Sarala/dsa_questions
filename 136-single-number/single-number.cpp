class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            //cout<<nums[0];
            return nums[0];
        }
        else{
        int count=1;
        int i=1;
        while(i<nums.size()){
            if(nums[i-1]==nums[i]){
                // count++;
                i+=2;
            }
            else   { 
                //cout << nums[i-1];
            return nums[i-1];
            }
        }
        return nums[i-1];
        }
        
        return 0;
      
    }
};