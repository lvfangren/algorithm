/**
 * @param {number[]} nums
 * @return {number}
 */
var arrayPairSum = function(nums) {
    nums.sort((a,b)=>{return a-b})
    let result=0;
    for (let i = 0; i < nums.length; i++) {
      if (i%2==0) {
        result+=nums[i];
      }
    }
    return result;
};


console.log(arrayPairSum([11, 41, -9046, 2047, 1118, 8477, 8446, 279, 4925, 7380, -1719, 3855]));
