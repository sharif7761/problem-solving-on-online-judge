// https://leetcode.com/problems/median-of-two-sorted-arrays/

var findMedianSortedArrays = function(nums1, nums2) {
    const joinedSortedArray = [...nums1, ...nums2].sort((a, b) => a-b);
    const halfLength = joinedSortedArray.length / 2;

    if(joinedSortedArray.length % 2 === 0){
        return (joinedSortedArray[halfLength] + joinedSortedArray[(halfLength)-1]) / 2
    } else {
        return joinedSortedArray[Math.floor(halfLength)]
}
};