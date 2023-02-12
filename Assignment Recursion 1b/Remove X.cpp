/*
Remove X

Given a string, compute recursively a new string where all 'x' chars have been removed.

Input format :
	String S
Output format :
	Modified String

Constraints :
	1 <= |S| <= 10^3
	where |S| represents the length of string S.

Sample Input 1 :
	xaxb
Sample Output 1:
	ab

Sample Input 2 :
	abc
Sample Output 2:
	abc

Sample Input 3 :
	xx
Sample Output 3:

*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int length(char input[])
{
	int len = 0;
	for (int i = 0; input[i] != '\0'; i++)
	{
		len++;
	}
	return len;
}

void removeX(char input[], int start)
{
	//base case
	if (input[start] == '\0')
	{
		return;
	}

	removeX(input, start + 1);
	if (input[start] == 'x')
	{
		int len = length(input);
		int i;
		for (i = start + 1; i < len; i++)
		{
			input[i - 1] = input[i];
		}

		input[i - 1] = '\0';
	}
}

void removeX(char input[])
{
	removeX(input, 0);
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

	char input[100];
	cin.getline(input, 100);
	removeX(input);
	cout << input << endl;

}