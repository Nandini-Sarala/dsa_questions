class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)
        return x;
        long st=1;
        long end=x;
        while(st<=end){
            long mid=st+(end-st)/2;
            long long sq=mid*mid;
            if((sq)<x){
                st=mid+1;
            }
            else if((sq)>x){
                end=mid-1;
            }
            else return mid;


        }
        return st-1;


    }
};