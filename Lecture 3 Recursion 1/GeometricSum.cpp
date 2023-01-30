/*
Geometric Sum

Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) using recursion.

Input format :
	Integer k
Output format :
	Geometric sum (upto 5 decimal places)

Constraints :
	0 <= k <= 1000

Sample Input 1 :
	3
Sample Output 1 :
	1.87500

Sample Input 2 :
	4
Sample Output 2 :
	1.93750

Explanation for Sample Input 1:
1+ 1/(2^1) + 1/(2^2) + 1/(2^3) = 1.87500

*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

double geometricSum(int k)
{
	//base case
	if (k == 0)
	{
		return 1;
	}

	double ans = geometricSum(k - 1);
	return ans + (1 / pow(2, k));

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

	int k;
	cin >> k;
	cout << fixed << setprecision(5);
	cout << geometricSum(k) << endl;

}