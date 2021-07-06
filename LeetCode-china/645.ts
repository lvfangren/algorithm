// hashMap
function findErrorNums(nums: number[]): number[] {
    let maps = new Map();
    for (let index = 0; index < nums.length; index++) {
        maps.set(nums[index], (maps.get(nums[index]) || 0) + 1);
    }
    let res: number[] = [];

    for (let i = 1; i <= nums.length; i++) {
        const count = maps.get(i) || 0;
        if (count === 2) {
            res[0] = i;
        } else if (count === 0) {
            res[1] = i;
        }
    }
    return res;
};