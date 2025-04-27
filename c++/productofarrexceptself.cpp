#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int>productofarrexceptself(vector<int>& nums)
    {
        int n=nums.size();
        vector<int>ans(n,1);
        vector<int>prefix(n,1);
        vector<int>suffix(n,1);
        //prefix
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        //suffix
        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=prefix[i]*suffix[i];
        }
        return ans;


    }
};
int main()
{
    Solution sol;
    vector<int>nums={1,2,3,4};
    cout<<"product of arr except self :" <<endl;
    //cout << sol.productofarrexceptself(nums) <<endl;
    vector<int> result = sol.productofarrexceptself(nums);
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
    
}