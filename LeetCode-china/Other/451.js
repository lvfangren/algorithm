/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function(s) {
    let obj={};
    for (let i = 0; i < s.length; i++) {
      if (obj[s[i]]) {
        obj[s[i]]++;
      }else {
        obj[s[i]]=1;
      }
    }
    let result='';
    for (let i = s.length; i >0; i--) {
      for (let variable in obj) {
        if (obj.hasOwnProperty(variable)) {
          if (obj[variable]==i) {
            result+=variable.repeat(obj[variable]);
          }
        }
      }
    }
    return result;
};

console.log(frequencySort('Aasas'));
