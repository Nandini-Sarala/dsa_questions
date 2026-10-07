class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=*max_element(nums.begin(),nums.end());
        if(n+1==nums.size()){
            for(int i=0;i<=n-1;i++){
                if(nums[i]!=i+1)
                return false;
            }
            return true;

        }
        return false;
        
    }
};