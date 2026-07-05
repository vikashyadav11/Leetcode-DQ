class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        bool firstRowHasZero = false;
        bool firstColHasZero = false;

        // Check if the first row contains zero
        for (int c = 0; c < cols; c++) {
            if (matrix[0][c] == 0) {
                firstRowHasZero = true;
                break;
            }
        }

        // Check if the first column contains zero
        for (int r = 0; r < rows; r++) {
            if (matrix[r][0] == 0) {
                firstColHasZero = true;
                break;
            }
        }

        // Use the first row and column as markers
        for (int r = 1; r < rows; r++) {
            for (int c = 1; c < cols; c++) {
                if (matrix[r][c] == 0) {
                    matrix[r][0] = 0;
                    matrix[0][c] = 0;
                }
            }
        }

        // Set the marked rows and columns to zero
        for (int r = 1; r < rows; r++) {
            for (int c = 1; c < cols; c++) {
                    if (matrix[0][c] == 0 || matrix[r][0]==0)
                    matrix[r][c] = 0;
                }
            
        }

        // Set the first row to zero if needed
        if (firstRowHasZero) {
            for (int c = 0; c < cols; c++) {
                matrix[0][c] = 0;
            }
        }

        // Set the first column to zero if needed
        if (firstColHasZero) {
            for (int r = 0; r < rows; r++) {
                matrix[r][0] = 0;
            }
        }        
    }
};


/*
class Solution {
public:
typedef pair<int,int> P;
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<P> vec;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!matrix[i][j]){
                    vec.push_back({i,j});
                }
            }
        }
        int s=vec.size();
        while(s--){
            P curr=vec.back();
            vec.pop_back();
            int i=curr.first;
            int j=curr.second;
            for(int x=0;x<n;x++){
                matrix[i][x]=0;
            }
            for(int x=0;x<m;x++){
                matrix[x][j]=0;
            }
        }
    }
};
*/