/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
    for (let i = 0; i < nums.length; i++) {
      if (nums[i]===target) {
        return i;
      }
    }
    nums.push(target);
    nums.sort((a,b)=>{return a>b});
    if (nums.indexOf(target)>-1) {
      return nums.indexOf(target);
    }else {
      return nums.length;
    }
};


let arr=[3,5,8,9,10];
console.log(searchInsert(arr,8));
