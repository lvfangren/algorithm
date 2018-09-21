/**
 * @param {number} n
 * @return {boolean}
 */
 // 刚刚开始是想递归，但是运行会报错。参看别人想法
// var isHappy = function(n) {
//     if (n==1) {
//       return true;
//     }
//     if (n>=Infinity||isNaN(n)) {
//       return false;
//     }
//     n=n.toString();
//     let arr=n.split('');
//     arr=arr.map((ite)=>{
//       ite=parseInt(ite);
//       return ite*ite;
//     });
//     // console.log(arr.reduce((a,b)=>a*a+b*b));
//     return arr.reduce((a,b)=>a+b)==1?true:isHappy(arr.reduce((a,b)=>a+b));
// };
var isHappy = function(n) {
    let result={};
    while (!result[n]&&n!=1) {
      result[n]=n;
      n.toString().split('').forEach((item,index)=>{
        if (index==0) {
          n=0;
        }
        n+=item*item;
      })
      n=parseInt(n);
    }
    return n == 1;
};
console.log(isHappy(19));
