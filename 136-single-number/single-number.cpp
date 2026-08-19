class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int f=0;
        for(int a:nums){
            f=f^a;
        }
        return f;
      
    }
};