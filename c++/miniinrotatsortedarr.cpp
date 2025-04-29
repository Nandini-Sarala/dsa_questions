#include<iostream>
#include<vector>
#include<limits.h>
#include<cmath>
using namespace std;
class Solution{
public:
int findmin(vector<int>&arr)
{int low=0,high=arr.size()-1;
int ans=INT_MAX;
while(low<=high)
{
    int mid=(low+high)/2;
    if(arr[low]<=arr[mid])
    {
        ans=min(ans,arr[low]);
        low=mid+1;
    }
    else{
        high=mid-1;
        ans=min(ans,arr[mid]);
    }
}
return ans;
}

};
int main()
{
    Solution sol;
    vector<int>arr={4,5,6,7,0,1,2};
    cout << "minimum :"<<sol.findmin(arr);
}