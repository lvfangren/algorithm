/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var reverseStr = function(s, k) {
    let result='';
    let tmp='';
    let left=0;
    while (left<s.length) {
      tmp=s.substr(left,k*2);
      // console.log(tmp);
      tmp=tmp.substr(0,k).split('').reverse().join('')+tmp.substr(k);
      // console.log(tmp);
      left+=2*k;
      result+=tmp;
      // console.log(left);
    }
    return result;
};

console.log(reverseStr('abcdefg',3));
