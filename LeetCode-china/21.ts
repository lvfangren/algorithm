// 双指针
function exchange(nums: number[]): number[] {
    if (nums.length <= 1) {
        return nums;
    }
    let left = 0, right = nums.length - 1;
    while (left < right) {
        if (nums[left] % 2 === 1) {
            left++;
            continue;
        }
        if (nums[right] % 2 === 0) {
            right--;
            continue;
        }
        [nums[left], nums[right]] = [nums[right], nums[left]];
        left++;
        right--;
    }

    return nums;
};