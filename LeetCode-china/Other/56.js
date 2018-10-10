/**
 * Definition for an interval.
 * function Interval(start, end) {
 *     this.start = start;
 *     this.end = end;
 * }
 */
/**
 * @param {Interval[]} intervals
 * @return {Interval[]}
 */
var merge = function(intervals) {
    if (intervals.length<=1) {
      return intervals;
    }
    intervals.sort((a,b)=>a[0]-b[0]);
    let tmp=intervals[0];
    let count=1,result=[];
    for (let i = 1; i < intervals.length; i++) {
      if (tmp[1]>=intervals[i][0]) {
        tmp[1]=intervals[i][1];
      }else {
        count++;
        result.push(tmp);
        tmp=intervals[i];
      }
    }
    result.push(tmp);
    // console.log(result);
    return result;
};

console.log(merge([[1,3],[2,6],[8,10],[15,18]]));
