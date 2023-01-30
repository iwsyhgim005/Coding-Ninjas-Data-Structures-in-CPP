/*
Multiplication (Recursive)

Given two integers M & N, calculate and return their multiplication using recursion.
You can only use subtraction and addition for your calculation. No other operators are allowed.

Input format :
	Line 1 : Integer M
	Line 2 : Integer N
Output format :
	M x N

Constraints :
	0 <= M <= 1000
	0 <= N <= 1000

Sample Input 1 :
	3
	5
Sample Output 1 :
	15

Sample Input 2 :
	4
	0
Sample Output 2 :
	0

*/

#include<iostream>
using namespace std;
typedef long long int lli;

int multiplyNumbers(int m, int n)
{
	//base case
	if (n == 0)
	{
		return 0;
	}

	return m + multiplyNumbers(m, n - 1);
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	int m, n;
	cin >> m >> n;
	cout << multiplyNumbers(m, n) << endl;


}