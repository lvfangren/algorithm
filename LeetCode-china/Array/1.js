/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
 // O(N)
 // 利用hash查找，参考两遍哈希表算法。
 // 刚刚开始思路是暴力，然后排序，遍历到nums中最大小于target的位置，但是复杂度还是太大。参看阅读解答和别人的答案，理解hash并运用hash解决
var twoSum = function(nums, target) {
    var dict={};
// 构建hash
    nums.forEach(function(e, i) {
        dict[e] = i + 1;
    })
    // 查找，判断目标元素不能是 nums[i]本身！
    for (let i = 0; i < nums.length; i++) {
      if (dict[target-nums[i]]&&dict[target - nums[i]] != i + 1) {
        return [i,dict[target-nums[i]]-1];
      }
    }
};
// console.log(twoSum([2, 7, 11, 15], 7));
