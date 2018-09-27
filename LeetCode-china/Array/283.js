/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
  let i = 0, j = 0;
    while (i < nums.length && j < nums.length) {
        if (nums[i] != 0) {
            i++;
        } else if (nums[j] == 0) {
            j++;
        } else if (i < j){
            let temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        } else {
            j++;
        }
    }
}
let arr=[0,1,0,0,1,0];
moveZeroes(arr)
console.log(arr);
