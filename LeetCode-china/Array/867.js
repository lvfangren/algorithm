/**
 * @param {number[][]} A
 * @return {number[][]}
 */
var transpose = function(A) {
    let result=[];
    let tmp=[];
    let len=A[0].length;
    for (let i = 0; i < len; i++) {
      tmp=[];
      A.forEach((ite)=>{
        tmp.push(ite.shift())
      })
      result.push(tmp);
    }
    return result;
};
console.log(transpose([[1,2]]));
