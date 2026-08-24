class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      
       vector<int> result={-1,-1};
     
     
       int start=found(nums,target,true);
       int last=found(nums,target,false);
       result[0]=start;
       result[1]=last;
      
 
        return result;

     }
        int found(vector<int>&nums,int target,bool findst){
             int ans=-1;
        int st=0;
        int end=nums.size()-1;
       
        while(st<=end)  {
            int mid=st+(end-st)/2;
           
            //lb=mid;
            if(target>nums[mid]){
                
                st=mid+1;
            }else if(target<nums[mid]){
                end=mid-1;
            }
            else {
                ans=mid;
               if(findst){
                end=mid-1;
               }
               else
               st=mid+1;
            }
            

        }
        return ans;
       }
};