/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findMaxAverage = function(nums, k) {
  var resultMax=-Infinity;
  let tmp=[];
  for (let i = 0; i < nums.length; i++) {
    if (k===1) {
      resultMax=Math.max(resultMax,nums[i])
    }else {
      if (nums.slice(i,i+k).length==k) {
        resultMax=Math.max(resultMax,nums.slice(i,i+k).reduce((a,b)=>a+b)/k);
      }
    }
  }
  return resultMax;
};

console.log(findMaxAverage([-1],1));
