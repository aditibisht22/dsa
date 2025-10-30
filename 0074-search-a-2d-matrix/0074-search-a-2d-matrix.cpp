class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int size = rows*cols;
        int s = 0;
        int e = size-1;
        
        while(s<=e){
            int mid = s+(e-s)/2;

            int i = mid/matrix[0].size();
            int j = mid % matrix[0].size();

            int curr = matrix[i][j];

            if(target == curr) return true;
            else if(target>curr) s = mid+1;
            else e = mid-1;

        }
        return false;
    }
};