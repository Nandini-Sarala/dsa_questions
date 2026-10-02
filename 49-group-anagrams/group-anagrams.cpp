class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ga;
        
        unordered_map<string,vector<string>>umap;
        for(auto x:strs){
            string s=x;
            sort(x.begin(),x.end());
            if(umap.find(x)!=umap.end()){
                umap[x].push_back(s);
            }else{
                umap[x].push_back(s);
            }
        }
        for(auto m:umap){
            ga.push_back(m.second);

        }
        return ga;
 
        
    }
};