// 双指针
function threeSumClosest(nums: number[], target: number): number {
    let res = Infinity;
    let tmpRes = Infinity;
    nums.sort((a, b) => a - b);
    for (let index = 0; index < nums.length; index++) {
        let left = index + 1, right = nums.length - 1;
        while (left < right) {
            let sum = nums[index] + nums[left] + nums[right];
            if (Math.abs(sum - target) < tmpRes) {
                tmpRes = Math.abs(sum - target);
                res = sum;
            }
            if (sum === target) {
                return sum;
            }
            if (sum < target) {
                left++;
            }
            if (sum > target) {
                right--;
            }
        }

    }


    return res;
};