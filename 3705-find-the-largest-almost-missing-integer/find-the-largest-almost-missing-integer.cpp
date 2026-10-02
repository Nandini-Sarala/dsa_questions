class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int maxi=-1;
        int n=nums.size();
        
        unordered_map<int,int> uset;
        for(int i=0;i<=n-k;i++){
            for(int j=i;j<k+i;j++){
                if(uset.find(nums[j])!=uset.end()){
                        uset[nums[j]]++;
                }
                else{
                    uset.insert(make_pair(nums[j],1));
                }
                
            }
          
            // uset.clear();
        }
        for(auto x:uset){
            if(x.second==1 ){
                maxi=max(x.first,maxi);
            }
            else if(n==k){
                maxi=max(x.first,maxi);
                 //return maxi;
            }
            // else
            // return -1;
        }
        return maxi;       
    }
};