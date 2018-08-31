/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    if (numRows===0) {
      return []
    }
    var result=[[1]];
    if (numRows==1) {
      return result;
    }
    for (let i = 2; i <= numRows; i++) {
      let tmp=[];
      for (let j = 0; j <i ; j++) {
          if (j==0) {
            tmp[j]=result[i-2][j]
          }else if(j==i-1){
            tmp[j]=result[i-2][j-1]
          }else {
            tmp[j]=result[i-2][j-1]+result[i-2][j]
          }
      }
      result.push(tmp);
    }
    return result;
};

console.log(generate(0));
