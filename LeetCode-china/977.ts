// 双指针
function sortedSquares(nums: number[]): number[] {
    let res: number[] = [], left = 0, right = nums.length -1, index = nums.length - 1;
    while (left <= right) {
        if (Math.abs(nums[left]) < Math.abs(nums[right])) {
            res[index] = nums[right] * nums[right];
            right--;
        } else {
            res[index] = nums[left] * nums[left];
            left ++;
        }
        index--;
    }
    return res;
};