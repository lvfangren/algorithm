/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let count=0,result=0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i]==1) {
          count++;
        }else {
          result=Math.max(count,result);
          count=0;
        }
    }
    result=Math.max(count,result);
    console.log(count,result);
    return result;

};

console.log(findMaxConsecutiveOnes([0,1]));
