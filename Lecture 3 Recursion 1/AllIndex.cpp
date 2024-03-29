/*
All Indices of Number

Given an array of length N and an integer x, you need to find all the indexes where x is present
in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.

Input Format :
	Line 1 : An Integer N i.e. size of array
	Line 2 : N integers which are elements of the array, separated by spaces
	Line 3 : Integer x

Output Format :
	indexes where x is present in the array (separated by space)

Constraints :
	1 <= N <= 10^3

Sample Input :
	5
	9 8 10 8 8
	8
Sample Output :
	1 3 4

*/

#include<iostream>
using namespace std;
typedef long long int lli;

void findIndexes(int input[], int currIndex, int n, int x, int output[], int &count)
{
	//base case
	if (currIndex == n)
	{
		return;
	}

	//element found
	if (input[currIndex] == x)
	{
		output[count] = currIndex;
		count++;
	}
	findIndexes(input, currIndex + 1, n, x, output, count);
}

int allIndexes(int input[], int n, int x, int output[])
{
	int count = 0;
	findIndexes(input, 0, n, x, output, count);
	return count;
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

	int *output = new int[n];

	int size = allIndexes(input, n, x, output);
	for (int i = 0; i < size; i++)
	{
		cout << output[i] << " ";
	}

	delete [] input;

	delete [] output;


}