// 双指针(快慢指针)
function removeDuplicates(nums: number[]): number {
    if (nums.length <= 2) {
        return nums.length;
    }
    let slow = 2, fast = 2;
    while (fast < nums.length) {
        if (nums[fast] !== nums[slow - 2]) {
            nums[slow] = nums[fast];
            slow++;
        }
        fast++;
    }
    return slow;
};