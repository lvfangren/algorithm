/**
 * Definition for an interval.
 * function Interval(start, end) {
 *     this.start = start;
 *     this.end = end;
 * }
 */
/**
 * @param {Interval[]} intervals
 * @return {number}
 */
var eraseOverlapIntervals = function(intervals) {
    let res=0;
    if (intervals.length<=1) {
      return res;
    }
    intervals.sort((a,b)=>{return a[0]-b[0]});
    console.log(intervals);
    let j=0;
    for (let i = 1; i < intervals.length; i++) {
      if (intervals[i][0]<intervals[j][1]) {
        ++res;
        if (intervals[i][1]<=intervals[j][1]) {
          j=i;
        }
      }else {
        j=i;
      }
    }
    return res;
};
console.log(eraseOverlapIntervals( [ [1,2], [2,3], [3,4], [1,3] ]));
