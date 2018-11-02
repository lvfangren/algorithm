/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    let obj={};
    for (let i of nums) {
      if (obj[i]) {
        ++obj[i];
      }else {
        obj[i]=1;
      }
    }
    let i=0;
    for (let item in obj) {
        for (let j = 0; j < obj[item]; j++) {
          nums[i++]=+item;
        }
    }
    console.log(nums);
};


// let sortColors = function(nums) {
//     for (let i = 0, j = 0, k = nums.length - 1; i <= k; i++) {
//         if (nums[i] === 0) {
//             [nums[i], nums[j++]] = [nums[j], nums[i]];
//         } else if (nums[i] === 2) {
//             [nums[k--], nums[i--]] = [nums[i], nums[k]];
//         }
//     }
//     console.log(nums);
// }
console.log(sortColors([2,0,2,1,1,0]));
