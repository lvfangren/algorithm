/**
 * @param {number[]} nums
 * @return {number}
 */

var maximumProduct = function(nums) {
    nums.sort((a,b)=>{return a-b});
    let len=nums.length;
    let result=nums[0]*nums[1]*nums[2];
    result=Math.max(result,nums[len-2]*nums[len-3]*nums[len-1]);
    result=Math.max(result,nums[0]*nums[1]*nums[len-1]);
    return result;
};


console.log(maximumProduct([1,2,3,4,-60,-2]));
