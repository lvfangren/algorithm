/**
 * @param {number[]} nums
 * @return {number[][]}
 */


 // 解题思路是不递归解法，先是长度为0.那对应的子集只能是【】，在为1时,空集加对应元素一个，为2时又在1的上面加1个元素......。
 var subsets = function(nums) {
   var result=[[]];
   var len= nums.length;
   if(len==0) {
       return result;
   }
   for(let i=0;i<len;i++) {
       var len2= result.length;
       var num= nums[i];
       var array= [num];
       for(let j=0;j<len2;j++) {
           var tempArr= result[j].concat(array);
           result.push(tempArr);
       }
   }
   return result;
 };




// var subsets = function(nums) {
//     let len = nums.length;
//     // 排列组数，合共len位，可选可不选，故有2^len种情况，1<<len===2^len
//     let p = 1 << len;
//     let ans = [];
//     for (let i = 0; i < p; i++) {
//         let sub = [],
//             idx = 0,
//             j = i;
//         while (j != 0) {
//             if (j % 2) {
//                 sub.push(nums[idx]);
//             }
//             j = Math.floor(j / 2);
//             idx++;
//         }
//         ans.push(sub);
//     }
//     return ans;
// };
console.log(subsets([1,2,3]));
