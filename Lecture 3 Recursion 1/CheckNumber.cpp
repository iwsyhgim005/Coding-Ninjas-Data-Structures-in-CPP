/*
Check Number

Given an array of length N and an integer x, you need to find if x is present in the array or not.
Return true or false.
Do this recursively.

Input Format :
	Line 1 : An Integer N i.e. size of array
	Line 2 : N integers which are elements of the array, separated by spaces
	Line 3 : Integer x
Output Format :
	'true' or 'false'

Constraints :
	1 <= N <= 10^3

Sample Input 1 :
	3
	9 8 10
	8
Sample Output 1 :
	true

Sample Input 2 :
	3
	9 8 10
	2
Sample Output 2 :
	false

*/

#include<iostream>
using namespace std;
typedef long long int lli;

bool checkNumber(int input[], int n, int x)
{
	if (n == 0)
	{
		return false;
	}

	else if (input[0] == x)
	{
		return true;
	}
	return checkNumber(input + 1, n - 1, x);
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

	int *input = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	int x;

	cin >> x;

	if (checkNumber(input, n, x))
	{
		cout << "true" << endl;
	}

	else
	{
		cout << "false" << endl;
	}

}