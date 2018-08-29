/**
 * @param {string} S
 * @return {number[][]}
 */
var largeGroupPositions = function(S) {
    let left=0,result=[];

    var count=1;

    for (let i = 1; i < S.length; i++) {
      if (S[left]===S[i]) {
        count++;
        // console.log(count);
      }else{
        if (count>=3) {
          result.push([left,i-1]);
        }
        count=1;
        left=i;
      }
    }
    if (count>=3){
      result.push([S.length-count,S.length-1])
    }
    return result;
};


console.log(largeGroupPositions("abcdddeeeeaabbbcd"));
