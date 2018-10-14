/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    let obj={};
    let result=[];
    for (let variable of strs) {
      let tmp=variable.split('').sort();
      obj[tmp.join('')]=[];
    }
    for (let variable of strs) {
      let tmp=variable.split('').sort().join('');
      if (obj[tmp]) {
        obj[tmp].push(variable);
      }
    }
    for (var variable in obj) {
      if (obj.hasOwnProperty(variable)) {
        // console.log(obj[variable]);
        result.push(obj[variable]);
      }
    }
    // console.log(obj);
    return result;
};

console.log(groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"]));
