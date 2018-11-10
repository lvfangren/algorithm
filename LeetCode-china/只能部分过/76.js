/**
 * @param {string} s
 * @param {string} t
 * @return {string}
 */

// 自己实现的思路：不hash，直接模拟解，首先从头找，找到t串位于s串的最大位置，在此子串中求解。后将s割下的余串重新做一遍刚刚的操作，但是针对
// "ADOBECODEBANC" "AA"数据测试过不去
// var minWindow = function(s, t) {
//   if (t.length==1) {
//     return s.indexOf(t)>-1?t:'';
//   }
//   const getHav=(s,t)=>{
//     let retu=false;
//     for (let ite of t) {
//       retu=s.indexOf(ite)>-1?true:false;
//       if (!retu) {
//         return retu;
//       }
//     }
//     return retu;
//   }
//
//   let maxLoca=-Infinity;
//   let res='';
//   for (let ite of t) {
//     maxLoca=Math.max(maxLoca,s.indexOf(ite));
//   }
//   for (let i = 0; i <= maxLoca; i++) {
//     let tmp=s.slice(i, maxLoca+1);
//     // console.log(tmp);
//     if (tmp.length>=t.length) {
//         if (getHav(tmp,t)) {
//           if (res) {
//             res=tmp.length<res.length?tmp:res;
//           }else {
//             res=tmp;
//           }
//         }
//     }
//   }
//   let sss=s.substring(maxLoca+1, s.length);
//   for (let ite of t) {
//     maxLoca=Math.max(maxLoca,sss.indexOf(ite));
//   }
//   for (let i = 0; i <= maxLoca; i++) {
//     let tmp=sss.slice(i, maxLoca+1);
//     // console.log(tmp);
//     if (tmp.length>=t.length) {
//         if (getHav(tmp,t)) {
//           if (res) {
//             res=tmp.length<res.length?tmp:res;
//           }else {
//             res=tmp;

//           }
//         }
//     }
//   }
//   return res;
// };





console.log(minWindow("ADOBECODEBANC","AA"));
