class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long sum=0;
        long maxsum=nums[0];
        
       for(int num : nums){
           sum+=num;
          //  sum+=nums[j++];
             maxsum=max(sum,maxsum);
            
            if(sum<0)
            sum=0;
           
        }
        return maxsum;
    }
};