#include<iostream>
#include<vector>
#include<cmath>
#include<limits.h>
using namespace std;
class Solution{
public:
int subarraywithmaxpro(vector<int>&arr)
{
    int pre=1,suff=1;
    int ans=INT_MIN;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {if (pre==0)
        pre=1;
        if(suff==0)
        suff=1;
        pre=pre*arr[i];
        suff=suff*arr[n-i-1];
        ans=max(ans,max(pre,suff));
    }
    return ans;
}
//return ans;
};
int main()
{
    Solution sol;
    vector<int>arr={2,3,-2,4};
    cout<<"max product :"<<sol.subarraywithmaxpro(arr)<<endl;
    return 0;
}