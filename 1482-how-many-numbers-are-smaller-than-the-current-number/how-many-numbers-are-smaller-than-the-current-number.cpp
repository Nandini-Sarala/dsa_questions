class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        //int i=0;
        vector<int>vec={};
        int count;
        for(int i=0;i<nums.size();i++){
            count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j] < nums[i]){
                count++;
            }

        }
        vec.push_back(count);
        
      // nums[i]=count;
       // count=0;
        }
        return vec;
    }
};