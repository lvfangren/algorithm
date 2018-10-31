/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number}
 */
var minPatches = function(nums, n) {
  let res=0,miss=1,index=0;
  while (miss<=n) {
    if (index<nums.length&&nums[index]<=miss) {
      miss+=nums[index++];
      console.log('---------111-------'+miss);
    }else {
      miss+=miss;
      res++;
      console.log(miss);
    }
  }
  return res;
};

console.log(minPatches([1,5,10],20));
