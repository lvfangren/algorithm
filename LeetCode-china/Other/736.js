/**
 * @param {string} S
 * @return {number[]}
 */
var partitionLabels = function(S) {
    let obj={};
    let result=[];
    for (let i = 0; i < S.length; i++) {
      obj[S[i]]=i;
    }
    // console.log(obj);
    let start=0,last=0;
    for (let i = 0; i < S.length; i++) {
      last=Math.max(last,obj[S[i]]);
      if (last==i) {
        result.push(last-start+1);
        start=i+1;
      }
    }
    // console.log(result);
    return result;
};



console.log(partitionLabels('abcdbac'));
