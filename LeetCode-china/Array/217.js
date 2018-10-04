/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    if(nums.length==Array.from(new Set(nums)).length){
        return false;
    }
    return true;
};
