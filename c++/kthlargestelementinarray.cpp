#include<iostream>
#include<vector>
#include<cmath>
#include<unordered_set>
#include<queue>
using namespace std;
class solution
{
public:
int findkthlargest(vector<int>& nums,int k)
{
 priority_queue<int,vector<int>,greater<int>>pq;
 for(int i=0;i<k;i++)
 {pq.push(nums[i]);
}
for(int i=k;i<nums.size();i++)
{
    if(pq.top()<=nums[i])
    {pq.pop();
    pq.push(nums[i]);
    }
}
return pq.top();
}
};
int main()
{
    solution sol;
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;
    cout << "The " << k << "th largest element is: " << sol.findkthlargest(nums, k) << endl;
    return 0;
}
// This code finds the kth largest element in an array using a min-heap (priority queue).