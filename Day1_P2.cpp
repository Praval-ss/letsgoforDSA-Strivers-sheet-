/* 

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1 

*/

//     https://leetcode.com/problems/pascals-triangle/submissions/


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        
        for(int i=0;i<numRows;i++){
            v[i].resize(i+1);
            v[i][0]=v[i][i]=1;
            
            for(int j=1;j<i;j++){
                v[i][j] = v[i-1][j-1]+v[i-1][j];
            }
            
        }
        return v;
    }
};