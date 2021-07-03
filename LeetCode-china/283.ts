// 水题(冒泡排序思想)
/**
 Do not return anything, modify nums in-place instead.
 */
function moveZeroes(nums: number[]): void {
    for (let index = nums.length - 1; index > 0; index--) {
        for (let j = 0; j < index; j++) {
            if (nums[j] === 0) {
                [nums[j], nums[j + 1]] = [nums[j + 1], nums[j]];
            }
        }

    }
};