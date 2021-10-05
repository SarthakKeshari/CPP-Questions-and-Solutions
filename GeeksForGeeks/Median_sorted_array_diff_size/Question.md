https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1#
<br/>Given two sorted arrays array1 and array2 of size m and n respectively. Find the median of the two sorted arrays.

<br/>Example 1:

<br/>Input:
<br/>m = 3, n = 4
<br/>array1[] = {1,5,9}
<br/>array2[] = {2,3,6,7}
<br/>Output: 5
<br/>Explanation: The middle element for
<br/>{1,2,3,5,6,7,9} is 5
<br/>Example 2:

<br/>Input:
<br/>m = 2, n = 4
<br/>array1[] = {4,6}
<br/>array2[] = {1,2,3,5}
<br/>Output: 3.5
<br/>Your Task:
<br/>The task is to complete the function MedianOfArrays() that takes array1 and array2 as input and returns their median. 
<br/>
<br/>Can you solve the problem in expected time complexity?
<br/>
<br/>Expected Time Complexity: O(min(log n, log m)).
<br/>Expected Auxiliary Space: O((n+m)/2).
<br/>
<br/>Constraints: 
<br/>0 ≤ m,n ≤ 10^4
<br/>1 ≤ array1[i], array2[i] ≤ 10^5
