class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> v;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                v.push_back(grid[i][j]);
            }
        }
        k %= v.size();
        reverse(v.begin() , v.end());
        reverse(v.begin() , v.begin() + k);
        reverse(v.begin()+k , v.end());

        
        int d = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                int a  = v[d++];
                grid[i][j] = a;
            }
        }
        return grid;
    }
};