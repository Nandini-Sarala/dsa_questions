class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    //     int st=0;
    //     int end=letters.size()-1;
    //    // int mid;
    //     if(int(target)>=int(letters[end]))
    //         return letters[0];
    //     else{
    //     while(st<=end ){
    //         int mid=st+(end-st)/2;
    //         if(int(target)<int(letters[mid])){
    //             end=mid-1;
    //         }
    //         else if(int(target)>int(letters[mid])){
    //             st=mid+1;
    //         }
    //         else{
    //             if(letters[mid]==letters[mid+1]){
    //                 mid++;
    //             }else 
    //              return letters[mid+1];
    //         }
    //     }
            
            // return char(int(letters[mid+1]));
            // return letters[end];
            //if()
        //     //return letters[end+1];
        // }
        
        // return letters[st];
        int st = 0, end = letters.size() - 1;
    int ansIdx = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (letters[mid] > target) {
            ansIdx = mid;      // candidate answer, keep looking left for a smaller one
            end = mid - 1;
        } else {
            st = mid + 1;      // letters[mid] <= target, need to look right
        }
    }

   // cout << (ansIdx == -1 ? letters[0] : letters[ansIdx]) << endl;
    return (ansIdx == -1 ? letters[0] : letters[ansIdx]);

        
    }
};