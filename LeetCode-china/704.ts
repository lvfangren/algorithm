// 二分查找
function search(nums: number[], target: number): number {
    let left = 0, right = nums.length - 1, middle = 0;
    while (left <= right) {
        middle = Math.floor((left + right) / 2);
        if (nums[middle] === target) {
            return middle;
        }
        if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
};