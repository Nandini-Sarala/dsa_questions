class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num==0||num==1)
        return true;
        long st=1;
        long end=num;
        
        while(st<=end){
            long mid=st+(end-st)/2;
            long long sq=mid*mid;

            if((sq)>num){
                end=mid-1;
            }
            else if((sq)<num){
                st=mid+1;
            }
            else 
            return true;

        }
        return false;
        
    }
};