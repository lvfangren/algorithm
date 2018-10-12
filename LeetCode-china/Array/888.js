/**
 * @param {number[]} A
 * @param {number[]} B
 * @return {number[]}
 */
 //纯数学公式推导，刚刚开始的时候想麻烦了。 
var fairCandySwap = function(A, B) {
  let numberA=A.reduce((a,b)=>a+b);
  let numberB=B.reduce((a,b)=>a+b);
  let tmp=Math.floor((numberB-numberA)/2);
  let obj={};
  for (let variable of B) {
    obj[variable]=1;
  }
  for (let variable of A) {
    if (obj[variable+tmp]) {
      return [variable,variable+tmp];
    }
  }
};

console.log(fairCandySwap([2],[2]));
