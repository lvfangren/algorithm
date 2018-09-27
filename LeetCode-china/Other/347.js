/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(s, k) {
  let obj={};
  let arr=[];
  for (let i = 0; i < s.length; i++) {
    if (obj[s[i]]) {
      obj[s[i]]++;
    }else {
      obj[s[i]]=1;
      arr.push(s[i]);
    }
  }
  console.log(arr);
  let result=[];
  for (let i = s.length; i >0; i--) {
    for (let variable in obj) {
      if (obj.hasOwnProperty(variable)) {
        if (obj[variable]==i) {
          result.push(+variable);
        }
      }
    }
  }
  return result.splice(0,k);
};
console.log(topKFrequent([1,1,1,2,2,3,3,3],2));
