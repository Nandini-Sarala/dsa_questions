class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=0;
        for(int i=0;i<nums.size();i++){
           //nums[i]^=nums[i+1];
            n^=nums[i];
        }
        return n;       
    }
};