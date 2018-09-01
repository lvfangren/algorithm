/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
 // 想到转正则，但是转换太麻烦了，需要先转字符串，字符串切数组，数组内元素类型转换，并且过程还需要变量记录，比较麻烦
var removeElement = function(nums, val) {
    let i=0;
    for (let j = 0; j < nums.length; j++) {
      if (val!=nums[j]) {
        nums[i]=nums[j];
        i++;
      }
    }
    return i;
};

console.log(removeElement([0,1,2,2,3,0,4,2],2));
