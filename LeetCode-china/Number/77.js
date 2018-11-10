/**
 * @param {number} n
 * @param {number} k
 * @return {number[][]}
 */

// 其实都是回溯解法


// 思路：参照78题，把所有可能结果做全排列，列出来后对结果filter筛选。
// var combine = function(n, k) {
//     let res=[[]];
//     for (let i = 1; i <= n; i++) {
//       let tmp=[i],len=res.length;
//       for (let j = 0; j < len; j++) {
//         let tmpArr=res[j].concat(tmp);
//         res.push(tmpArr);
//       }
//     }
//     res=res.filter((item)=>item.length==k);
//     // console.log(res);
//     return res;
// };

// best resolve
var combine = function(n, k) {
  const getChangeRes=(start,end,k,res,now)=>{
    if (start+k>end+1) {
      return ;
    }
    if (k===0) {
      res.push(now);
      return ;
    }
    let next=now.slice(); //数组的浅拷贝，嗯，之前一直都是用map来做，现在知道了可以用silce
    next.push(start);
    getChangeRes(start+1,end,k-1,res,next);
    getChangeRes(start+1,end,k,res,now);
  }
  let res=[];
  getChangeRes(1,n,k,res,[]);

  return res;
};

console.log(combine(4,2));
