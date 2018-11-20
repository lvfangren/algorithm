/**
 * @param {number[]} nums
 * @return {number[][]}
 */
 // 无重复元素排列，回溯思想
 var permute = function(nums) {
     const getArr=(res,tmp,nums)=>{
       if (tmp.length==nums.length) {
         // console.log(tmp);
         res.push(tmp.map(a=>a));
         // console.log(res);
         return;
       }
       for (let i = 0; i < nums.length; i++) {
         if (tmp.indexOf(nums[i])!==-1) {
           continue;
         }
         tmp.push(nums[i]);
         getArr(res,tmp,nums);
         tmp.pop();
       }
     }
     let res=[];
     getArr(res,[],nums);
     return res;
     // console.log(res);
 };

console.log(permute([1,2]));
