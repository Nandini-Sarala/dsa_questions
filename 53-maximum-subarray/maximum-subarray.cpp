class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long sum=0;
        long maxsum=nums[0];
        int i=0;
        int j=i+1;
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