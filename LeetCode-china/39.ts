// BFS
function combinationSum(candidates: number[], target: number): number[][] {
    let res: number[][] = [];

    function bfs(path: number[]): void {
        if(path.reduce((a,b)=>a+b) === target) {
            res.push(path);
            return ;
        }
        for (let index = 0; index < candidates.length; index++) {
            const element = candidates[index];
            path.push(element);
            bfs([...path]);
        }
    }
    bfs([]);


    return res;
};