// methods1 hashmap
function intersect(nums1: number[], nums2: number[]): number[] {
    if (nums1.length === 0 || nums2.length === 0) {
        return [];
    }
    let res = [], hashMap = new Map();
    let [lenMinArr, lenMaxArr] = nums1.length < nums2.length ? [nums1, nums2] : [nums2, nums1];

    for (let index = 0; index < lenMinArr.length; index++) {
        if (hashMap.has(lenMinArr[index])) {
            hashMap.set(lenMinArr[index], hashMap.get(lenMinArr[index]) + 1);
        } else {
            hashMap.set(lenMinArr[index], 1);
        }
    }

    for (let index = 0; index < lenMaxArr.length; index++) {
        const element = lenMaxArr[index];
        if (hashMap.get(element)) {
            res.push(element);
            hashMap.set(element, hashMap.get(element) - 1);
        }
    }
    return res;
};

// 双指针
function intersect2(nums1: number[], nums2: number[]): number[] {
    if (nums1.length === 0 || nums2.length === 0) {
        return [];
    }    
    let res = [];
    // let [num1SortArr, num2SortArr] = [nums1.sort((a,b) => a-b), nums2.sort((a,b) => a-b)];
    nums1.sort((a,b) => a-b);
    nums2.sort((a,b) => a-b);
    let i = 0, j = 0;
    while (i < nums1.length && j < nums2.length) {
        if (nums1[i] === nums2[j]) {
            res.push(nums1[i]);
            i++;
            j++;
        }
        if(nums1[i] > nums2[j]) {
            j++;
        }
        if(nums1[i] < nums2[j]) {
            i++;
        }
    }
    
    return res;
};

