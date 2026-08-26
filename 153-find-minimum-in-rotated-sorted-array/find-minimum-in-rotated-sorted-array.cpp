class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                continue;

            }
            else 
                return nums[i];

        }
        return min;
        
    }
};