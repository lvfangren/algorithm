var twoSum = function(nums, target) {
    var dict={};
// 构建hash
    nums.forEach(function(e, i) {
        dict[e] = i + 1;
    })
    // 查找，判断目标元素不能是 nums[i]本身！
    for (let i = 0; i < nums.length; i++) {
      if (dict[target-nums[i]]&&dict[target - nums[i]] != i + 1) {
        return [i+1,dict[target-nums[i]]];
      }
    }
};
