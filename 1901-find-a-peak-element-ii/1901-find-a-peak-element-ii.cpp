class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int maxi = INT_MIN;
        vector<int> ans;
        //max element
        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j<mat[0].size(); j++){
               if(maxi < mat[i][j]){
                maxi = mat[i][j];
               ans = {i,j};
               }
            }
        }
        return ans;
    }

};