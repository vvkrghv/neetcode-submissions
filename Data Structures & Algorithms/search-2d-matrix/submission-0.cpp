class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int low=0,high=(row*col)-1;
        while(low<=high){
            int mid=(low+high)/2;
            int m=mid/col;
            int n=mid%col;
            if(matrix[m][n]==target){
                return true;
            }
            else if(matrix[m][n]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};
