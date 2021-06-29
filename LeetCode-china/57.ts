// 双指针
function twoSum(nums: number[], target: number): number[] {
    if (nums.length <= 1 || nums[nums.length - 1] + nums[nums.length - 2] < target) {
        return [];
    }
    let left = 0, right = nums.length - 1;
    while (left < right) {
        if (nums[left] + nums[right] === target) {
            return [nums[left], nums[right]];
        }
        if (nums[left] + nums[right] > target) {
            right--;
        }
        if (nums[left] + nums[right] === target) {
            left++;
        }
    }

    return [];
};