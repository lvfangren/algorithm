/**
 * @param {string} s
 * @return {number}
 */


 // TLE
 var lengthOfLongestSubstring = function(s) {
   const getNumber=(str)=>{
     let obj={};
     for (let i = 0; i < str.length; i++) {
         if (obj[str[i]]) {
           return 0;
         }else {
           obj[str[i]]=1;
         }
     }
     return str.length;
   }
   if (s.length<=1) {
     return s.length;
   }
   let result=-Infinity;
   for (let i = 0; i < s.length; i++) {
     for (let j = s.length; j > 1; j--) {
       let tmpStr=s.slice(i,j);
       result=Math.max(result,getNumber(tmpStr));
     }
   }
   return result;
 };

console.log(lengthOfLongestSubstring(' scsc'));
