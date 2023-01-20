/*
Print Numbers

Given the number 'n', write a code to print numbers from 1 to n in increasing order recursively.

Input Format :
	Integer n
Output Format :
	Numbers from 1 to n (separated by space)

Constraints :
	1 <= n <= 10000

Sample Input 1 :
 	6
Sample Output 1 :
	1 2 3 4 5 6

Sample Input 2 :
 	4
Sample Output 2 :
	1 2 3 4
*/

#include<iostream>
using namespace std;
typedef long long int lli;

void print(int n)
{
	if (n == 1)
	{
		cout << 1 << " ";
		return;
	}

	print(n - 1);
	cout << n << " ";
	return;
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

	print(n);

}