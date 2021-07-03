// 二分查找插入
function searchInsert(nums: number[], target: number): number {
    if (nums[0] >= target) {
        return 0;
    }
    if (nums[nums.length - 1] < target) {
        return nums.length;
    }

    let left = 0, right = nums.length - 1, middle = 0;

    while (left <= right) {
        middle = Math.floor(left + (right - left) / 2);
        if (nums[middle] <= target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    if (nums[right] === target) {
        return right;
    }
    return left;
};