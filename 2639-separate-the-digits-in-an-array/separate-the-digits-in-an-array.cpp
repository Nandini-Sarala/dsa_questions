class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<n;i++){
            while(nums[i]>0){
                int rem =nums[i]%10;
                nums[i]/=10;
                st.push(rem);
            }
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};