/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let resu=new Map();
    nums.forEach((item)=>{
      let count=resu.get(item);
      if (count) {
        resu.set(item,++count);
      }else {
        resu.set(item,1);
      }
    })
    for (let vul of resu) {
      if (vul[1]==1) {
        return vul[0];
      }
    }
};

console.log(singleNumber([4,1,2,1,2]));
