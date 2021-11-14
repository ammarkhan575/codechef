#[1. Which Fuel is Cheaper](https://www.codechef.com/NOV21C/problems/CHEAPFUEL)
The current price of petrol is X rupees, and the current price of diesel is Y rupees. At the start of each month, the price of petrol increases by A rupees and the price of diesel increases by B rupees.

Chef is curious to know which fuel costs less at the end of the Kth month. If petrol is cheaper than diesel at the end of Kth month, then print PETROL. If diesel is cheaper than petrol at the end of the Kth month, then print DIESEL. If both the fuels have the same price at the end of the Kth month, then print SAME PRICE.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line of input, containing five space-separated integers X,Y,A,B,K.
Output Format
For each test case,

Print PETROL if petrol is cheaper than diesel.
Print DIESEL if diesel is cheaper than petrol.
Print SAME PRICE otherwise.
Note: The output is case-insensitive. You can print each character in either lower-case or upper-case.

Constraints
1≤T≤1000
1≤K≤1000
0≤X,Y,A,B≤1000
Subtasks
Subtask 1 (100 points): Original constraints
Sample Input 1 
3
1 1 1 1 1
2 1 2 1 2
2 2 1 1 2
Sample Output 1 
SAME PRICE
DIESEL
SAME PRICE


Explanation
Test case 1:

Initially, the price of petrol is 1 rupee and the price of diesel is 1 rupee. Since A=1 and B=1, the prices of both petrol and diesel increase by 1 rupee at the start of every month. So, at the start of the first month, the price of petrol becomes 1+1=2 rupees and the price of diesel becomes 1+1=2 rupees. By the end of the first month, the price of petrol and diesel are both 2 rupees and hence they both have the same price.

