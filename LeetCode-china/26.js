/**
 * @param {number[]} nums
 * @return {number}
 */
//最初想法是ES6扩展运算符加Set解决，但是过不了。
var removeDuplicates = function(nums) {
  if (nums.length == 0) return 0;
    let i = 0;
    for (let j = 1; j < nums.length; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
};

var arr=[0,0,1,1,1,2,2,3,3,4];
console.log(removeDuplicates(arr));
console.log(arr);
