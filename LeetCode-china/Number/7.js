/**
 * @param {number} x
 * @return {number}
 */
 var reverse = function(x) {
     let rev=0;
     while (x) {
       let pop=x%10;
       x=x>=0?Math.floor(x/10):Math.round(x/10);
       console.log(x);
       rev=rev*10+pop;
     }
     return rev;
 };
console.log(reverse(124));
