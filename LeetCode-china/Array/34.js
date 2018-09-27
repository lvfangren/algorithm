/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    let start=nums.indexOf(target);
    if(start>-1){
       return [start,nums.lastIndexOf(target)];
    }
    return [-1,-1]
};
