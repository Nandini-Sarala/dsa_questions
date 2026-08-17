class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        long m=0;
        long maxi=0;
        for(int i=0;i<accounts.size();i++){
            m=0;
            for(int j=0;j<accounts[i].size();j++){
                m += accounts[i][j];
                
            }
            maxi=max(maxi,m);
        }
        return maxi;
        
    }
};