/**
 * @param {number[]} nums
 * @return {number[]}
 */
 var productExceptSelf = function (nums) {
    let resu=1,count=0;
    nums.forEach((item,index)=>{
      item?resu*=item:count++;
    })
    if (count>0) {
      if (count==1) {
        nums.forEach((item,index)=>{
          nums[index]=item?0:resu;
        })
      }else {
        nums.forEach((item,index)=>{
          nums[index]=0;
        })
      }
    }else {
      nums.forEach((item,index)=>{
        nums[index]=resu/item;
      })
    }
    return nums;
 };
console.log(productExceptSelf([1,0,2,1]));
