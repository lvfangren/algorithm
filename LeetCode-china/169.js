/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    nums.sort((a,b)=>{return a-b;});
    let left=0,right=0,result;
    let tmp=nums[left];

    if (nums.length===1) {
      return nums[0];
    }

    while (right!==nums.length-1) {
        right=nums.lastIndexOf(tmp);
        if ((right-left+1)>Math.floor(nums.length/2)) {
          result=tmp;
          break;
        }
        left=right+1;
        tmp=nums[left];
    }
    return result;
};

console.log(majorityElement());
