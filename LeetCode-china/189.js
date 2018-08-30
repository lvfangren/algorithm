/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
  // while (k--) {
  //   let x=nums.pop();
  //   nums.unshift(x);
  // }


  // nums=Array.prototype.concat(nums.splice(-(k%nums.length)),nums);

   let tm=nums.splice(-(k%nums.length));
   nums.unshift(...tm);
};

console.log(rotate([1,2,3,4,5,6,7],3));
