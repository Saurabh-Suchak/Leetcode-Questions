class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        vector<set<int>>row(matrix.size()),col(matrix.size());
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                if(row[i].count(matrix[i][j]) || col[j].count(matrix[i][j])){
                    return false;
                }
                row[i].insert(matrix[i][j]);
                col[j].insert(matrix[i][j]);
            }
        }return true;
    }
};