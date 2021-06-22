// DFS 深度优先遍历
function maxAreaOfIsland(grid: number[][]): number {
    let res = 0;
    for (let index = 0; index < grid.length; index++) {
        for (let j = 0; j < grid[index].length; j++) {
            if (grid[index][j] === 1) {
                res  = Math.max(res, dfs(index, j, grid));
            }            
        }
    }
    return res;
};

function dfs(i: number, j: number, grid: number[][]): number {
    if (grid[i] === undefined || grid[i][j] === undefined || grid[i][j] === 0) {
        return 0;
    }
    let area = 1;
    grid[i][j] = 0;
    area += dfs(i - 1, j, grid);
    area += dfs(i + 1, j, grid);
    area += dfs(i, j - 1, grid);
    area += dfs(i, j + 1, grid);
    return area;
}

// maxAreaOfIsland([[1,1,0,0,0],[1,1,0,0,0],[0,0,0,1,1],[0,0,0,1,1]])