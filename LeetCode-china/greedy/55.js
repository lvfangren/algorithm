/**
 * @param {number[]} nums
 * @return {boolean}
 */
 // 写贪心老是会写成递归，刷了几道贪心的题，代码量都不是很大。还是要加强啊！！！！！！！！！
var canJump = function(nums) {
      // if (nums.length<=1||nums[0]>=nums.length-1) {
      //   return true;
      // }else {
      //   for (let i = 1; i <= nums[0]; i++) {
      //     if (nums[i]) {
      //       let tmp=nums.splice(i,nums.length-1);
      //       console.log(tmp);
      //       return canJump(tmp);
      //     }
      //   }
      // }
      // return false;

      // let tmp=nums[nums.length-1];
      // if (nums.splice(0,nums.length).reduce((a,b)=>a+b)>=tmp) {
      //   return true;
      // }else {
      //   return false;
      // }

      let tmpMax=0; //用于记录当前能到达的最远距离
      for (let i = 0; i < nums.length; i++) {
          if (i>tmpMax) {
            return false;
          }
          // 贪心的思路在这里!!!!!
          if (tmpMax<i+nums[i]) {
            tmpMax=i+nums[i];
          }
      }
      return true;
};

console.log(canJump([3,2,1,0,4]));
