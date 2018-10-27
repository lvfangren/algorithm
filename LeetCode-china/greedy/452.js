/**
 * @param {number[][]} points
 * @return {number}
 */
var findMinArrowShots = function(points) {
    if (points.length==0) {
      return 0;
    }
    let result=1;
    points.sort((a,b)=>{
      return a[0]-b[0];
    });
    let tmp=points[0];
    for (let i = 1; i < points.length; ++i) {
      if (points[i][0]<=tmp[1]) {
        tmp[0]=points[i][0];
        if (points[i][1]<=tmp[1]) {
          tmp[1]=points[i][1];
        }
      }else {
        ++result;
        tmp=points[i];
      }
    }
    return result;
};

console.log(findMinArrowShots([[9,12],[1,10],[4,11],[8,12],[3,9],[6,9],[6,7]]));
