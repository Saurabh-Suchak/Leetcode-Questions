class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int mx=INT_MIN;
        vector<int>r;
//         for(int i=0;i<matrix.size();i++){
//             for(int j=0;j<matrix[i].size();j++){
                
//             }
//         }
        for(int i=0;i<matrix[0].size();i++){
            mx=INT_MIN;
            r.clear();
            for(int j=0;j<matrix.size();j++){
                // cout<<matrix[j][i]<<endl;
                if(matrix[j][i]>mx){
                    mx=matrix[j][i];
                }
                if(matrix[j][i]==-1){
                    r.push_back(j);
                }
            }
            for(int t=0;t<r.size();t++){
                matrix[r[t]][i]=mx;
            }
        }
        return matrix;
    }
};

