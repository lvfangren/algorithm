// 二分查找
/**
 * The knows API is defined in the parent class Relation.
 * isBadVersion(version: number): boolean {
 *     ...
 * };
 */

var solution = function (isBadVersion: any) {

    return function (n: number): number {
        let left = 1, right = n, middle;
        while (left < right) {
            middle = Math.floor(left + (right - left) / 2); //防止数据过大导致溢出
            if (isBadVersion(middle)) {
                right = middle;
            } else {
                left = middle + 1;
            }
        }
        return left;
    };
};