class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int areasum=0;
        int width,ht;
        while(left<=right){
            
            width=right-left;
            ht=min(height[left],height[right]);
            int area=width*ht;
            areasum=max(areasum,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
         
           

       
        return areasum;
        
    }
};