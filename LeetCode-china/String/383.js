/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    // let resuMap={};
    let resuMap=new Map();
    for (let i = 0; i < magazine.length; i++) {
      if (resuMap.get(magazine[i])) {
        let tmp=resuMap.get(magazine[i]);
        resuMap.set(magazine[i],++tmp);
      }else {
        resuMap.set(magazine[i],1);
      }
    }
    for (let i = 0; i < ransomNote.length; i++) {
      let tmpValue=resuMap.get(ransomNote[i]);
      if (!tmpValue) {
        return false;
      }else {
        resuMap.set(ransomNote[i],--tmpValue)
      }
    }
    return true;
};

console.log(canConstruct('aa','aca'));
