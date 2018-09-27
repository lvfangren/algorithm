/**
 * @param {string[]} words
 * @return {string[]}
 */
var findWords = function(words) {
  let obj={line1:['q','w','e','r','t','y','u','i','o','p'],
  line2:['a','s','d','f','g','h','j','k','l'],
  line3:['z','x','c','v','b','n','m']};
  let result=[];
  words.forEach((item)=>{
    let a=0,b=0,c=0;
    for (let i = 0; i < item.length; i++) {
      if (obj['line1'].indexOf(item[i].toLocaleLowerCase())!=-1) {
        ++a;
      }
      if (obj['line2'].indexOf(item[i].toLocaleLowerCase())!=-1) {
        ++b;
      }
      if (obj['line3'].indexOf(item[i].toLocaleLowerCase())!=-1) {
        ++c;
      }
    }
    if (a==item.length||b==item.length||c==item.length) {
      result.push(item);
    }
  });
  return result;
};
console.log(findWords(["Hello", "Alaska", "Dad", "Peace"]));
