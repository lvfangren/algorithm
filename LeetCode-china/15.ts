// 双指针
function threeSum(nums: number[]): number[][] {
    if (nums.length < 3) {
        return [];
    }
    nums.sort((a, b) => a - b);
    if (nums[0] > 0) {
        return [];
    }
    let res:number[][] = [];
    let left = 1, right = nums.length - 1;
    for (let now = 0; now < nums.length; now++) {
        if (nums[now] === nums[now - 1]) {
            continue;
        }
        left = now + 1;
        right = nums.length - 1;        
        while (left < right) {
            let sum = nums[left] + nums[right] + nums[now];
            if (sum === 0) {
                while (left < right && nums[left] === nums[left + 1]) {                    
                    left++;
                }
                while (left < right && nums[right] === nums[right - 1]) {
                    right--;
                }
                res.push([nums[now], nums[left], nums[right]]);
                right--;
                left++;
            }
            if (sum > 0) {
                right--;
            }
            if (sum < 0) {
                left++;
            }
        }
    }
    return res;
};