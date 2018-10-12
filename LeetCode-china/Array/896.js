/**
 * @param {number[]} A
 * @return {boolean}
 */
var isMonotonic = function(A) {
    let countA=0,countB=0;
    for (let i = 0,j=1; j < A.length; ) {
      if (A[i]<=A[j]) {
        countA++;
      }
      if(A[i]>=A[j]){
        countB++;
      }
      i++;
      j++;
    }
    if (countA==A.length-1||countB==A.length-1) {
      return true;
    }else {
      return false;
    }
};

console.log(isMonotonic([4,4]));
