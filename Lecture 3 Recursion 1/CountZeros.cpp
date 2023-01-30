/*
Count Zeros

Given an integer N, count and return the number of zeros that are present in the given integer using recursion.

Input Format :
	Integer N
Output Format :
	Number of zeros in N

Constraints :
	0 <= N <= 10^9

Sample Input 1 :
	0
Sample Output 1 :
	1

Sample Input 2 :
	00010204
Sample Output 2 :
	2

Explanation for Sample Output 2 :
Even though "00010204" has 5 zeros, the output would still be 2 because when you convert it to an integer,
it becomes 10204.

Sample Input 3 :
	708000
Sample Output 3 :
	4

*/

#include<iostream>
using namespace std;
typedef long long int lli;

int countZeros(int n)
{
	//base case
	if (n < 9)
	{
		return 0;
	}

	int cnt = 0;
	int last = (n % 10);

	if (last == 0)
	{
		cnt = 1;
	}

	return cnt + countZeros(n / 10);;
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
	cout << countZeros(n) << endl;


}