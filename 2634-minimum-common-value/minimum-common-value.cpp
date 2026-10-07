
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0;int j=0;int c=INT_MAX;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]==nums2[j]){
                c=nums1[i];
                break;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else j++;
        }
        return c!=INT_MAX?c:-1;
    }
};// class Solution {
// public:
//     int getCommon(vector<int>& nums1, vector<int>& nums2) {
//         int n1=nums1.size();
//         int n2=nums2.size();
    
        
//         for(int i=0;i<n2;i++){
//             int tar=nums2[i];
//             int st=0;
//             int end=n1-1;
//         while(st<=end){
            
//             int mid=st+(end-st)/2;
//             if(nums1[mid]<tar){
//                 st=mid+1;

//             }
//             else if(nums1[mid]>tar){
//                 end=mid-1;
//             }
//             else{
//                 return tar;
//             }
//         }
//         }
      
//         return -1;
//     }
// };
  // for(int i=0;i<n1;i++){
        //     for(int j=0;j<n2;j++){
        //         if(nums1[i]==nums2[j]){
        //             return nums1[i];
        //         }
        //     }
        // }