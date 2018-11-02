/**
 * @param {number} n
 * @return {string[]}
 */
var generateParenthesis = function(n) {
  const getStr=(res,str,open,close,n)=>{
    if (str.length==n*2) {
      res.push(str);
      return;
    }
    if (open<n) {
      getStr(res,str+'(',open+1,close,n);
    }
    // 满足条件添加
    if (close<open) {
      getStr(res,str+')',open,close+1,n);
    }
  }
  let res=[];
  getStr(res,'',0,0,n);
  return res;
};

//最优解
// var generateParenthesis = function(n) {
//     let res = []
//     const fn = (left, right, str) => {
//         if(left<0 || right<0 || left>right)
//             return
//         if(left === 0 && right === 0){
//             res.push(str)
//             return
//         }
//         fn(left-1, right, str+'(')
//         fn(left, right-1, str+')')
//     }
//     fn(n, n, '')
//     return res
// };
console.log(generateParenthesis(3));
