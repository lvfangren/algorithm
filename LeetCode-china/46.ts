// BFS + 回溯
function permute(nums: number[]): number[][] {
    let res: number[][] = [], statusArr: boolean[] = new Array(nums.length).fill(false), deep: number = 0;


    function bfs(deep: number, path: number[]) {
        if (deep === nums.length) {
            res.push(path);
            return;
        }
        for (let index = 0; index < nums.length; index++) {
            const element = nums[index];
            if (statusArr[index]) {
                continue;
            }
            path.push(element);
            statusArr[index] = true;
            bfs(deep + 1, [...path]);
            path.pop();
            statusArr[index] = false;
        }

    }

    bfs(deep, []);
    return res;
};