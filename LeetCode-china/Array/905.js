/**
 * @param {number[]} A
 * @return {number[]}
 */
var sortArrayByParity = function(A) {
  let i=0,j=A.length-1;
  while (i<j) {
    if (!(A[i]%2)) {
      // A[i]为偶数
      if (!(A[j]%2)) {
        i++;
      }else {
        i++;
        j--;
      }
    }else {
      // A[i]为奇数
      if (!(A[j]%2)) {
        [A[i],A[j]]=[A[j],A[i]];
        i++;
        j--;
      }else {
        j--;
      }
    }
  }
  return A;
};

console.log(sortArrayByParity([1,1,2]));
