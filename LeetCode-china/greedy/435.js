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
    intervals.sort((a,b)=>a[0]-b[0]);
    // console.log(intervals);
    let res=0;
    for (let i = 0; i < intervals.length-1; i++) {
      // console.log(intervals[i][0]);
      if (intervals[i+1][1]<=intervals[i][1]) {
          ++res;
      }
    }
    return res;
};
console.log(eraseOverlapIntervals( [[1,2],[-1,3]]));
