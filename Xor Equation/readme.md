[XOR Equation](https://www.codechef.com/NOV21C/problems/XOREQN)

You are given an array A of N non-negative integers, where N is odd. Find the minimum non-negative integer x that satisfies the equation

(A1+x)⊕(A2+x)⊕⋯⊕(AN+x)=0
where ⊕ denotes the bitwise XOR operation. If no such x exists, print −1.

Note: The input of this problem is large, so use fast input/output methods.

Input Format
First line of the input contains a single integer T, the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N, denoting the size of the array A.
The second line of each test case contains N space-separated non-negative integers A1,A2…AN.
Output Format
For each test case, print a single line containing one integer. If there does not exist any non-negative integer x that satisfies the given equation, print −1. Otherwise, print the minimum value of x that satisfies the given equation.