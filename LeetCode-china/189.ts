// 水题
/**
 Do not return anything, modify nums in-place instead.
 */
function rotate(nums: number[], k: number): void {
    let tmpArr = new Array(nums.length);
    for (let index = 0; index < nums.length; index++) {
        tmpArr[(index + k) % nums.length] = nums[index];
    }
    for (let index = 0; index < tmpArr.length; index++) {
        nums[index] = tmpArr[index];
    }
};