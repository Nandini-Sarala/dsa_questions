class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> umap;
        int n=nums.size();
        for(int i=0;i<n;i++){
            umap[nums[i]]++;
        }
       for(auto x:umap){
        if(x.second==1){
            return x.first;
        }
       }
       return -1;
        
    }
};