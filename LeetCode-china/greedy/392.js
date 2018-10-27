/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
// var isSubsequence = function(s, t) {
//   let i=0,j=0;
//   while (i<s.length||j<t.length) {
//     if (s.charAt(i)==t.charAt(j)) {
//       i++;
//     }
//     j++;
//   }
//   if (i==s.length) {
//     return true;
//   }
//   // console.log(i);
//   return false;
// };

var isSubsequence = function(s, t) {
  let index = -1
  for (var i of s) {
    index = t.indexOf(i, index + 1)
    if (index === -1) return false
  }
  return true

};

console.log(isSubsequence('agc','ahbgdc'));
