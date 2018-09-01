/**
 * @param {number[]} nums
 * @return {number}
 */
 // 题目很常见了，马上反应DP，然后默默的baidu了下，OK。但是题目提示分治。嗯，先DP吧

var maxSubArray = function(nums) {
  let dp=[];
  dp[0]=nums[0];
  for (let i = 1; i < nums.length; i++) {
      dp[i]=Math.max(dp[i-1]+nums[i],nums[i]);
  }
  let k=0;
  for (var i = 1; i < dp.length; i++) {
    if (dp[i]>dp[k]) {
      k=i;
    }
  }
  return dp[k];
};

// 分治,嗯，其实就是递归，切分

console.log(maxSubArray([-2,1,-3,4,-1,2,1,-5,4]));
