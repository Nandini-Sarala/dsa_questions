class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int k=-1;
        int i=0,j=1;
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                //swap(nums[i++],nums[j]);
                nums[++i]=nums[j];
                
            }
            j++;
        }
        return i+1;
    }
};