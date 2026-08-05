class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[j++]=nums[i];
            
        }
    }
    
    //cout<<j;
    //  for(int i=0;i<j;i++){
    //      cout<<nums[i]<<" ";
    
    //  }

    return j;
       
        
    }
        
    
};