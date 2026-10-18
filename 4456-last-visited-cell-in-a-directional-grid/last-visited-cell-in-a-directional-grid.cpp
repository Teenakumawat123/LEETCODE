
class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int r = 0, c = 0;
        int pr = 0, pc = 0;

        vector<vector<bool>> visited(
            m, vector<bool>(n, false)
        );

        while (true) {
            // If this cell was already visited,
            // return the previous cell.
            if (visited[r][c]) {
                return {pr, pc};
            }

            visited[r][c] = true;

            pr = r;
            pc = c;

            if (grid[r][c] == 'L') {
                c--;
            }
            else if (grid[r][c] == 'R') {
                c++;
            }
            else if (grid[r][c] == 'U') {
                r--;
            }
            else {
                r++;  // D
            }

            // Check whether we left the grid.
            if (r < 0 || r >= m ||
                c < 0 || c >= n) {
                return {pr, pc};
            }
        }
    }
};
