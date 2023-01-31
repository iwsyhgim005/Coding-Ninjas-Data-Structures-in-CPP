/*
Sum of digits (recursive)

Write a recursive function that returns the sum of the digits of a given integer.

Input format :
	Integer N
Output format :
	Sum of digits of N

Constraints :
	0 <= N <= 10^9

Sample Input 1 :
	12345
Sample Output 1 :
	15

Sample Input 2 :
	9
Sample Output 2 :
	9

*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int sumOfDigits (int n)
{
	//base case
	if (n < 10)
	{
		return n;
	}

	return (n % 10) + sumOfDigits(n / 10);
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

	int n;
	cin >> n;
	cout << sumOfDigits(n) << endl;

}