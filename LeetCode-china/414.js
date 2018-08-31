/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
  let arrs=([...new Set(nums)]);
  arrs.sort((a,b)=>b-a)
  if (arrs.length>=3) {
    return arrs[2];
  }else {
    return arrs[0];
  }
};

console.log(thirdMax([1,2,2]));
