class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<long long>> v(n+1, vector<long long>(m+1));
        for(int i = 0; i<=n; i++)v[i][0] = 1;
        for(int i = 0; i<=m; i++)v[0][i] = 1;
        for(int i = 1; i<=n;i++){
            for(int j = 1; j<=m; j++)v[i][j]= v[i-1][j] + v[i][j-1];
        }
        return v[n-1][m-1];
    }
};