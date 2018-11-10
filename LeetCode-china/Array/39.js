/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function(candidates, target) {
    const getArr=(res,tmpArr,target,candidates,start)=>{
      // 自己的思路
        // let val=0;
        // if (tmpArr!=[]) {
        //   val=tmpArr.reduce((a,b)=>a+b);
        // }
        // if (val===target) {
        //   res.push(tmpArr);
        //   return ;
        // }
        // if (val<target) {
        //     tmpArr.push(candidates[start]);
        //     getArr(res, tmpArr, target, candidates, ++start);
        // }
        // if (val>target) {
        //     tmpArr.pop();
        //     getArr(res, tmpArr, target, candidates, 0);
        // }
        if (target<=0) {
          if (target==0) {
            console.log(tmpArr);
            res.push(tmpArr);
            console.log(res);
          }
          return ;
        }
        for (let i = start; i < candidates.length; i++) {
          tmpArr.push(candidates[i]);
          getArr(res,tmpArr,target-candidates[i],candidates,i);
          tmpArr.pop();
        }
    };

    candidates.sort((a,b)=>a-b);
    let res=[];
    getArr(res,[],target,candidates,0);
    return res;
};

console.log(combinationSum([1,2,3],3));
