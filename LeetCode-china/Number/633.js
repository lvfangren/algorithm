/**
 * @param {number} c
 * @return {boolean}
 */
var judgeSquareSum = function(c) {
  for (let i = 0; i <=c; i++) {
    for (let j = 0; j <=i; j++) {
      if (i*i+j*j==c) {
        return true;
      }
    }
  }
  return false;
};

console.log(judgeSquareSum(1));
