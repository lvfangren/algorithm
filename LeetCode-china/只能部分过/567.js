/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */

// 类似题目76题，本题也错，和76一样，正解还是要构建hash表做。
var checkInclusion = function(s1, s2) {
  if (s1 == '' || s2 == '') {
    return false;
  }
  let len = s1.length,
    res = false;
  const getRes = (s1, s2) => {
    for (let ite of s2) {
      if (s1.indexOf(ite) === -1) {
        return false;
      }
    }
    return true;
  }
  for (let i = 0; i < s2.length; i++) {
    let tmp = s2.substr(i, len);
    if (getRes(tmp, s1)) {
      return true;
    }
  }
  return false;
};

console.log(checkInclusion('hello', "ooolleoooleh"));
