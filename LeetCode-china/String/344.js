/**
 * @param {string} s
 * @return {string}
 */
var reverseString = function(s) {
  let tmpArr=s.split('');
  tmpArr.reverse();
  // console.log(tmpArr);
  return tmpArr.join('');
};

console.log(reverseString('  1'));
